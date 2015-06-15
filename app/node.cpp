#include "node.h"

using namespace std;

Node::Node() {
}

Node::Node(std::string name, int id, int* distances) {
    this->name = name;
    this->child = distances;
    this->id = id;
}

Node::~Node() {
}
