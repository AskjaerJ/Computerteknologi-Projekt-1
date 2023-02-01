#include "array_int_queue.h"
#include "assert.h"

Array_int_queue::Array_int_queue(int size)
{
    queue = new int[size];
    max = size;
    front = 0;
}

void Array_int_queue::enqueue(int x)
{
    assert(front < max);
    for (int i = front - 1; i >= 0; i--)
    {
        queue[i + 1] = queue[i];
    }
    queue[0] = x;
    front++;
}

int Array_int_queue::dequeue()
{
    assert(front > 0);
    front--;
    return queue[front];
}

bool Array_int_queue::empty()
{
    return front == 0;
}

bool Array_int_queue::full()
{
    return front == max;
}

Array_int_queue::~Array_int_queue()
{
    delete queue;
}