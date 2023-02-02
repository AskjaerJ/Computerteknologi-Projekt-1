#include "list_int_queue.h"
#include "assert.h"

List_int_queue::List_int_queue(queue *q)
{
    q->front = NULL;
    q->size = 0;
    q->front = NULL;
}

void List_int_queue::enqueue(int x)
{
    assert(front < max);
    for (int i = front-1; i >= 0; i--) {
        queue[i+1] = queue[i];
    }
    queue[0] = x;
    front++;
}

int List_int_queue::dequeue() 
{
    assert(front > 0);
    front--;
    return queue[front];
}

bool List_int_queue::empty() 
{
    return 
}

bool List_int_queue::full() 
{
    return front == max;
}

List_int_queue::~List_int_queue() {
    delete queue;
}