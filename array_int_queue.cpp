#include "array_int_queue.h"
#include "assert.h"

Array_int_queue::Array_int_queue(int size)
{
    queue = new int[size];
    max = size;
    top = 0;
}

void Array_int_queue::enqueue(int x)
{
    assert(top < max-1);

}