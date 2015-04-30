#include <stdio.h>
#include <assert.h>

//#include "queue.h"
#include "test_queue.h"
#include "scheduler.h"

void test_scheduler() {
	tqueue* queue,waiting;
	decode("A", queue, &waiting);
	assert(pop(queue)==0);
	delete(queue);
}

int main(void) {
	test_create();
	test_push_pop();
	test_scheduler();
	puts("testing complete");
	return 0;
}

void test_create() {
	tqueue* que;
	puts("testing create");
	que=create();
	assert(que->count==0);
	assert(que->first==NULL);
	assert(que->first==NULL);
	delete(que);
}

void test_push_pop() {
	tqueue* que;
	puts("testing push");
	que=create();
	assert(pop(que)==-1);
	push(que,54);
	puts("add into queue");
	assert(pop(que)==54);
	push(que,1);
	push(que,2);
	puts("adding 2 values into queue");
	assert(pop(que)==1);
	puts("pop first out: ");
	assert(pop(que)==2);
	puts("pop second out");
	assert(pop(que)==-1);
	puts("ensuring queue is empty after last pop");
	delete(que);
}


