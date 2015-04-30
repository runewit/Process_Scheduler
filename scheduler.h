#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void decode(char* command, tqueue* queue, tqueue* waiting); //figures out what to do given input of command

int stop(); //stop the current running process if it exists, return it's pid
void ready(int pid); //push pid to ready queue
void sleep(int pid, int abs_time); //stop(), calculate absolute time from relative time, add pid to wait queue, run_next()
void awaken(int pid); //remove from wait list, add to ready
void block(int pid); //stop(), add pid to IO list, run_next()
int run_next(); //pop the next process from the readdy queue, ready() previous process if it exists.

#endif