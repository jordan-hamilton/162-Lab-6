#include "IntNode.hpp"

IntNode::IntNode() {

}


IntNode::IntNode(int valIn) {
  val = valIn;
  prev = nullptr;
  next = nullptr;
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
