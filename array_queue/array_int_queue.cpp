#include "array_int_queue.h"
#include "assert.h"

Array_int_queue::Array_int_queue(int size)
{
    queue = new int[size]; /* Creates new array of input size.*/
    max = size;
    front = 0;
}

void Array_int_queue::enqueue(int x)
{
    assert(front < max); /* Asserts that front is not larger than the max array size. */
    for (int i = front - 1; i >= 0; i--)
    {
        queue[i + 1] = queue[i]; /* Moves every position in the array one place. */
    }
    queue[0] = x; /* Sets the front value in array to the input value. */
    front++; /* Adds one to the front size. */
}

int Array_int_queue::dequeue()
{
    assert(front > 0); /* Asserts that there is a value in the array, which is only true if front > 0. */
    front--;  /* Subtracts one from front. */
    return queue[front]; /* Returns the dequeue'd value in the array. */
}

bool Array_int_queue::empty()
{
    return front == 0; /* If front is == 0 array is empty.  */
}

bool Array_int_queue::full()
{
    return front == max; /* Checks if full through boolean value true or false. */
}

Array_int_queue::~Array_int_queue()
{
    delete queue;
}