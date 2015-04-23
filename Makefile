all: fmain.c queue.c
	gcc -o main fmain.c queue.c -I .

run:
	./main

clean:
	rm -f main
	rm -f t

test: test_queue.c queue.c
	gcc -o t test_queue.c queue.c -I .
	./t
	rm -f t