#include <stdio.h>
#include <assert.h>

#include "queue.h"
#include "test_queue.h"

int main(void) {
	test_create();
	test_push_pop();
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
	assert(pop(que)==54);
	push(que,1);
	push(que,2);
	assert(pop(que)==1);
	assert(pop(que)==2);
	assert(pop(que)==-1);
	delete(que);
}