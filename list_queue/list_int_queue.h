#ifndef LIST_INT_QUEUE_H
#define LIST_INT_QUEUE_H

#include "int_queue.h"

class List_int_queue : public Int_queue
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
    List_int_queue(int);
    ~List_int_queue();
};

#endif