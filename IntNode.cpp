#include "IntNode.hpp"

IntNode::IntNode() {
  val = 0;
  prev = next = nullptr;
}


IntNode::IntNode(int valIn, IntNode* prevIn, IntNode* nextIn) {
  val = valIn;
  prev = prevIn;
  next = nextIn;
}


IntNode* IntNode::getNext(){
  return next;
}


IntNode* IntNode::getPrev() {
  return prev;
}


int IntNode::getVal() {
  return val;
}


void IntNode::setNext(IntNode* nextIn) {
  next = nextIn;
}


void IntNode::setPrev(IntNode* prevIn) {
  prev = prevIn;
}


void IntNode::setVal(int valIn) {
  val = valIn;
}
