#ifndef LIST_INT_QUEUE_H
#define LIST_INT_QUEUE_H

#include "int_queue.h"


class Q_node
{
public:
    int data;
    Q_node *next; 
    Q_node(int);
};

class List_int_queue : public Int_queue
{
private:
    Q_node *front;
    Q_node *rear;
    int size;

public:
    void enqueue(int) override;
    int dequeue() override;
    bool empty() override;
    bool full() override;
    List_int_queue();
};



#endif