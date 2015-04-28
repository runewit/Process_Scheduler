typedef struct que_slot{
	struct que_slot *before;
	int program_id;
	struct que_slot *after;
}tqs;

typedef struct queue{
	int count;
	tqs *first;
	tqs *last;
}tqueue;

void delete(tqueue* q);
tqueue* create();
void push(tqueue *queue, int value);
int pop(tqueue *queue);