#include "list_int_queue.h"
#include "assert.h"
#include "stdlib.h"

List_int_queue::List_int_queue()
{
    size = 0;
    front = NULL;
    rear = NULL;
}

Q_node::Q_node(int n)
{
    data = n;
    next = NULL;
}

void List_int_queue::enqueue(int x)
{
    Q_node *ptr_new_qnode = new Q_node(x);
    
    if (size == 0)
    { /*both front and rear must be new node*/
        front = ptr_new_qnode;
        rear = ptr_new_qnode;
    }
    else
    {
        rear->next = ptr_new_qnode; /*includes new node in queue*/
        rear = ptr_new_qnode;       /*updates rear to be newly inserted node*/
    }

    size++;
}

int List_int_queue::dequeue()
{
    assert(size > 0);
    int k = front->data; /*saves data to be returned*/

    front = front->next; /*sets new front*/

    size--;

    return k;
}

bool List_int_queue::empty()
{
    return size == 0; /*queue is empty when size is 0*/
}

bool List_int_queue::full()
{
    return false; // Queue is never full
}

