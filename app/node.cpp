#include "node.h"

using namespace std;

Node::Node(int name) {
    this->name = name;
}

void Node::addChild(int distance, Node* node) {
    this->child.insert(std::pair<int, Node*>(distance, node));
}
