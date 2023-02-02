#include "list_int_queue.h"
#include "assert.h"
#include "stdlib.h"


List_int_queue::List_int_queue()
{
    queue *q = (queue *)malloc(sizeof(queue));
    q->size = 0;
    q->front = NULL;
    q->rear = NULL;
}

void List_int_queue::enqueue(int x)
{

   
}

int List_int_queue::dequeue() 
{
  
}

bool List_int_queue::empty() 
{
   if(q->size == 0) {
    return 1;
   }
   else {
    return 0;
   }
}

bool List_int_queue::full() 
{
   return false; //Queue is never full
}

List_int_queue::~List_int_queue()
{
    delete queue;
}