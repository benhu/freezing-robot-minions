#include "node.h"

using namespace std;

Node::Node(int distance) {
    this->distance = distance;
}

void Node::addChild(int nodeNumber, int distance) {
    Node* node = new Node(distance);
    this->child.insert(std::pair<int, Node*>(nodeNumber, node));
}

Node* Node::getChild(int nodeNumber) {
    map<int, Node*>::iterator p;

    p = this->child.find(nodeNumber);

    if(p != this->child.end()) {
        return p->second;
    }

    return NULL;
}
