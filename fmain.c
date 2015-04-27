#include <queue.h>
#include <stdio.h>

void main(void){
	// creating usable locations
	char command[5];
	char data[10];
	char ready[75];
	char waiting[75];
	int run_counter=0,wait_run_counter=0,wait_add_counter=0,add_counter=0;
	
	printf("scheduler: ");
	scanf("%s",command);
	
	if(command[0]=="A"){ //pid
		A()//command[1],command[2],command[3]);
		//roll_add_counter;
	}
	else if(command[0]=="T"){
		T;
		//roll_run_counter;
	}
	else if(command[0]=="S"){
		S;
		//roll_run_counter;
		//roll_wait_add_counter;
	}
	else if(command[0]=="I"){ //pid
		I()//command[1],command[2],command[3]);
		//roll_add_counter;
		//roll_wait_run_counter;
	}
	else if(command[0]=="W"){ //time
		W()//command[1],command[2],command[3]);
		//not sure how to do this
	}
	else if(command[0]=="K"){ //pid
		K()//command[1],command[2],command[3]);
		//roll_counter;
		//this doesn't work with my current system... can't look up anything by it's id
	}
	else if(command[0]=="E"){
		E;
		//not sure how to do this
	}
	else{
		//roll_run_counter;
	}
}