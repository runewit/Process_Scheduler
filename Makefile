all: fmain.c queue.c scheduler.c
	gcc -o main fmain.c queue.c scheduler.c -I .

run:
	./main

clean:
	rm -f main
	rm -f t

test: test_queue.c queue.c scheduler.c
	gcc -o t test_queue.c queue.c scheduler.c -I .
	./t
	rm -f t