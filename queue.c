#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

tqueue* create(){
	tqueue*q=calloc(1, sizeof(tqueue));
	q->count=0;
	q->first=NULL;
	q->last=NULL;
	return q;
}

void delete(tqueue* q){
	while(pop(q) != -1);
	free(q);
}

void push(tqueue *queue, int value){
	tqs *slot=calloc(1, sizeof(tqs));
	
	slot->program_id = value;
	
	if(queue->last == NULL && queue->first == NULL){
		queue->first = slot;
		queue->last = slot;
	}else{ //last-->first-->pops_off //after-->before-->pops_off
		slot->before = queue->last;
		queue->last->after = slot;
		queue->last = slot;
	}
	
	queue->count++;
}

int pop(tqueue *queue){
	int pid;
	
	if(queue->first == NULL && queue->last == NULL){
		printf("queue is empty\n");
		return -1;
	}else if(queue->first == queue->last){
		pid=queue->first->program_id;
		free(queue->first);
		queue->first = NULL;
		queue->last = NULL;
		printf("popped last item out\n");
	}else{
		pid=queue->first->program_id;
		printf("set pid\n");
		queue->first = queue->first->after;
		printf("set new first\n");
		free(queue->first->before);
		printf("freed old first\n");
		queue->first->before = NULL;
		printf("set new first's before reference to null\n");
	}
	return pid;
}

/*
void *delete(tqueue *queue, tqs *slot){
	void *result = NULL;
	
	if(slot==queue->first && slot==queue->last){
		queue->first = NULL;
		queue->last = NULL;
	}else if(slot == queue->first){
		queue->first = slot->next;
		queue->first->before=NULL;
	}else if(slot == queue->last){
		queue->last = slot->before;
		queue->last->after = NULL;
	}else {
		tqs *subsequent = slot->after;
		tqs *previous = slot->before;
		subsequent->before = previous;
		previous->after = subsequent;
	}
	queue->count--;
	result=slot->value;
	
}
*/