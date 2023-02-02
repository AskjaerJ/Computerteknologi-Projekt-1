#ifndef LIST_INT_QUEUE_H
#define LIST_INT_QUEUE_H

#include "int_queue.h"

class List_int_queue : public Int_queue
{
private:
    typedef struct node
{
  int data;
  struct node *next;
} node_t;

typedef struct
{
  node_t *head;
} linked_list;

public:
    void enqueue(int) override;
    int dequeue() override;
    bool empty() override;
    bool full() override;
    List_int_queue();
    ~List_int_queue();
};

#endif