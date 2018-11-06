#ifndef INTNODE_HPP
#define INTNODE_HPP

class IntNode {

  public:
    IntNode();
    IntNode(int valIn, IntNode* nextIn, IntNode* prevIn);
    IntNode* getNext();
    IntNode* getPrev();
    int getVal();
    void getNext(IntNode* nextIn);
    void getPrev(IntNode* prevIn);
    void setVal(int valIn);

  private:
    int val;
    IntNode* prev;
    IntNode* next;

};

#endif
