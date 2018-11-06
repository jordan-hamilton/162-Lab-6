#include "IntNode.hpp"

ntNode();
IntNode(int valIn, IntNode* nextIn, IntNode* prevIn);


IntNode* IntNode::getNext(){
  return next;
}


IntNode* IntNode::getPrev() {
  return prev;
}


int IntNode::getVal() {
  return val;
}


void IntNode::getNext(IntNode* nextIn) {
  next = nextIn;
}


void IntNode::getPrev(IntNode* prevIn) {
  prev = prevIn;
}


void IntNode::setVal(int valIn) {
  val = valIn;
}
