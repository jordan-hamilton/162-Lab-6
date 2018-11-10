#ifndef INTNODE_HPP
#define INTNODE_HPP

class IntNode {

  public:
    IntNode();
    IntNode(int valIn);
    IntNode* getNext();
    IntNode* getPrev();
    int getVal();
    void setNext(IntNode* nextIn);
    void setPrev(IntNode* prevIn);
    void setVal(int valIn);

  private:
    int val;
    IntNode* prev;
    IntNode* next;

};

#endif
