#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "IntNode.hpp"

class LinkedList {

  public:
    void addHead();
    void addTail();
    void removeHead();
    void removeTail();
    void reverse();
    void traverse();

  private:
    IntNode* head;
    IntNode* tail;

};

#endif
