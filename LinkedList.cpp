#include "LinkedList.hpp"

using std::cout;
using std::endl;

LinkedList::LinkedList() {
  head = tail = nullptr;
}


void LinkedList::addHead(int valIn) {

  if (!head && !tail) {
    head = tail = new IntNode(valIn, nullptr, nullptr);
  } else if (head) {
    IntNode* oldHead = head;
    head = new IntNode(valIn, nullptr, oldHead);
    oldHead->setPrev(head);
  }

  printTraversal();

}


void LinkedList::addTail(int valIn) {

  if (!head && !tail) {
    head = tail = new IntNode(valIn, nullptr, nullptr);
  } else if (tail) {
    IntNode* oldTail = tail;
    tail = new IntNode(valIn, oldTail, nullptr);
    oldTail->setNext(tail);
  }

  printTraversal();

}


void LinkedList::removeHead() {

  if (head) {

    if (head == tail) {
      delete head;
      head = tail = nullptr;
    } else {
      IntNode* newHead = head->getNext();
      delete head;
      head = newHead;
      head->setPrev(nullptr);
    }

  }

  printTraversal();

}


void LinkedList::removeTail() {

  if (tail) {

    if (head == tail) {
      delete tail;
      head = tail = nullptr;
    } else {
      IntNode* newTail = tail->getPrev();
      delete tail;
      tail = newTail;
      tail->setNext(nullptr);
    }

  }

  printTraversal();

}


void LinkedList::printReversal() {

  if (!head && !tail) {
    cout << "No items exist in this list." << endl;
  } else {

    IntNode* nodeToPrint = tail;

    do {

      cout << nodeToPrint->getVal() << endl;
      nodeToPrint = nodeToPrint->getPrev();

    } while ( nodeToPrint );

  }

}


void LinkedList::printTraversal() {

  if (!head && !tail) {
    cout << "No items exist in this list." << endl;
  } else {

    IntNode* nodeToPrint = head;

    do {

      cout << nodeToPrint->getVal() << endl;
      nodeToPrint = nodeToPrint->getNext();

    } while ( nodeToPrint );

  }

}


IntNode* LinkedList::getHead() {
  return head;
}


IntNode* LinkedList::getTail() {
  return tail;
}


void LinkedList::setHead(IntNode* headIn) {
  head = headIn;
}


void LinkedList::setTail(IntNode* tailIn) {
  tail = tailIn;
}
