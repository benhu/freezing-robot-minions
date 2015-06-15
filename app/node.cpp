#include "node.h"

using namespace std;

Node::Node() {
}

Node::Node(std::string n, int mId, int* distances):name(n), id(mId), child(distances) {
    this->banana = new int[29];
}

Node::~Node() {
}
