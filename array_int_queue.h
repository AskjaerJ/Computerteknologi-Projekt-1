#ifndef ARRAY_INT_QUEUE_H
#define ARRAY_INT_QUEUE_H

#include "int_queue.h"

class Array_int_queue : public Int_queue
{
private:
    int *queue;
    int max;
    int front;

public:
    void enqueue(int) override;
    int dequeue() override;
    bool empty() override;
    bool full() override;
    Array_int_queue(int);
    ~Array_int_queue();
};

#endif