all: fmain.c queue.c scheduler.c
	gcc -o main fmain.c queue.c scheduler.c -I .

run:
	./main

clean:
	rm -f main
	rm -f t

test: test_queue.o queue.o scheduler.o
	gcc -o t test_queue.o queue.o scheduler.o -I .
	./t
	rm -f t