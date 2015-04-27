#include <queue.h>

typedef struct que_slot{
	struct que_slot *before;
	int program_id;
	struct que_slot *after;
}tqs;

typedef struct list{
	int count;
	tqs *first;
	tqs *last;
}tlist;

void push(tlist *list, int value){
	tqs *slot=calloc(1, sizeof(tqs));
	
	slot->program_id = value;
	
	if(list->last == NULL && list->first == NULL){
		list->first = slot;
		list->last = slot;
	}else{ //last-->first-->pops_off //after-->before
		slot->before = list->last;
		list->first = slot;
		list->last = slot;
	}
	
	list->count++;
}

int pop(tlist *list){
	int pid;
	
	if(list->first == NULL && slot->last == NULL){
		printf("queue is empty");
		return -1;
	}else if(list->first == list->last){
		pid=slot->program_id;
		free(list->first);
		list->first = NULL;
		list->last = NULL;
	}else{
		pid=slot->program_id;
		list->first = list->first->after;
		free(list->first->before);
		list->first->before = NULL;
	}
	return pid; //slot != NULL ? delete(list, slot) : NULL;
}

/*
void *delete(tlist *list, tqs *slot){
	void *result = NULL;
	
	if(slot==list->first && slot==list->last){
		list->first = NULL;
		list->last = NULL;
	}else if(slot == list->first){
		list->first = slot->next;
		list->first->before=NULL;
	}else if(slot == list->last){
		list->last = slot->before;
		list->last->after = NULL;
	}else {
		tqs *subsequent = slot->after;
		tqs *previous = slot->before;
		subsequent->before = previous;
		previous->after = subsequent;
	}
	list->count--;
	result=slot->value;
	
}
*/