#include "scheduler.h"

void A(int pid){
	//push(queue,pid);
}
void T(void){
	//int n;
	//n=pop(queue);
	//push(queue,n);
}
void S(void){
	//int n;
	//n=pop(queue);
	//move(waiting,n);
}
void I(int pid){
	//move(waiting,pid);
	//push(queue,pid);
}
void W(int timer){
	//int n;
	//set n to something
	//sleep(n,timer);
}
void K(int pid){}
void E(void){
	//delete(queue);
	//report();
}
int stop(){} //stop the current running process if it exists, return it's pid
void ready(int pid){} //push pid to ready queue
void sleep(int pid, int abs_time){} //stop(), calculate absolute time from relative time, add pid to wait list, run_next()
void awaken(int pid){} //remove from wait list, add to ready
void block(int pid){} //stop(), add pid to IO list, run_next()
int run_next(){} //pop the next process from the readdy queue, ready() previous process if it exists.