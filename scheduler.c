#include <string.h>
#include "scheduler.h"

void decode(char* command, tqueue* queue, tqueue* waiting){
	char *token;
	char *split_on = " ";
	int pid = 0;
	int n = 0;
	
	token = strtok(command, split_on);
	
	
	if(strncmp(token,"A",1)==0){ //pid
		//A;
		char m;
		printf("\n make m\n");
		m = *strtok(command, split_on);
		m = *strtok(command, NULL);
		printf("%c",m);
		printf("set m\n");
		sscanf(&m,"%i",&n);
		printf("changed m to int\n");
		push(queue,n);
		printf("pushed n into queue\n");
	}
	else if(strncmp(token,"T",1)==0){
		n=pop(queue);
		push(waiting,n);
		//T;
	}
	else if(strncmp(token,"S",1)==0){
		//S;
		n=pop(queue);
		push(waiting,n);
	}
	else if(strncmp(token,"I",1)==0){ //pid
		//I()
		push(queue, pid);	
	}
	else if(strncmp(token,"W",1)==0){ //time
		//W()	
	}
	else if(strncmp(token,"K",1)==0){ //pid
		//K()
	}
	else if(strncmp(token,"E",1)==0){
		//E;
		delete(queue);
		delete(waiting);
	}
	else{
		//do nothing, or proceed to next command
	}
}

int stop(){
	return -1;
} //stop the current running process if it exists, return it's pid
void ready(int pid){} //push pid to ready queue
void sleep(int pid, int abs_time){} //stop(), calculate absolute time from relative time, add pid to wait list, run_next()
void awaken(int pid){} //remove from wait list, add to ready
void block(int pid){} //stop(), add pid to IO list, run_next()
int run_next(){
	return -1;
} //pop the next process from the readdy queue, ready() previous process if it exists.