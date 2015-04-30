#include <string.h>
#include "scheduler.h"

int main(void){
	char command[10];
	tqueue* queue;
	tqueue* waiting;
	
	waiting=create();
	queue=create();
	
	printf("scheduler: ");
	scanf("%s",command);
	
	decode(command, queue, waiting);
	return 0;
}