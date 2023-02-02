#include "list_int_queue.h"
#include "assert.h"
#include "stdlib.h"

List_int_queue::List_int_queue()
{
    size = 0;
    front = NULL;
    rear = NULL;
}

void List_int_queue::enqueue(int x)
{
    qnode *new_qnode; /**/
    new_qnode->data = x;

    if (q->size == 0)
    { /*both front and rear must be new node*/
        q->front = new_qnode;
        q->rear = new_qnode;
    }
    else
    {
        q->rear->next = new_qnode; /*includes new node in queue*/
        q->rear = new_qnode;       /*updates rear to be newly inserted node*/
    }

    q->size++;
}

int List_int_queue::dequeue()
{
    assert(q->size > 0);
    int x = q->front->data; /*saves data to be returned*/
    qnode *temp = q->front; /*temporary qnode pointer to hold node to be freed*/

    q->front = q->front->next; /*sets new front*/

    free(temp); /*to avoid memory leak*/

    q->size--;

    return x;
}

bool List_int_queue::empty()
{
    return q->size == 0; /*queue is empty when size is 0*/
}

bool List_int_queue::full()
{
    return false; // Queue is never full
}

List_int_queue::~List_int_queue()
{
    delete q;
}