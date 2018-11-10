#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>

#include "IntNode.hpp"

class LinkedList {

  public:
    LinkedList();
    ~LinkedList();
    void addHead(int valIn);
    void addTail(int valIn);
    void removeHead();
    void removeTail();
    void printReversal();
    void printTraversal();
    IntNode* getHead();
    IntNode* getTail();
    void setHead(IntNode* headIn);
    void setTail(IntNode* tailIn);

  private:
    IntNode* head;
    IntNode* tail;

};

#endif
