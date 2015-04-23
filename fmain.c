#include <queue.h>
#include <stdio.h>

void main(void){
	// creating usable locations
	char command[10];
	char data[10];
	
	printf("scheduler: ");
	scanf("%s",input);
	
	if(command[0]=="A"){
		A();
	}
	else if(command[0]=="T"){
		T;
	}
	else if(command[0]=="S"){
		S;
	}
	else if(command[0]=="I"){
		I();
	}
	else if(command[0]=="W"){
		W();
	}
	else if(command[0]=="K"){
		K();
	}
	else if(command[0]=="E"){
		E;
	}
	else{
		
	}
}