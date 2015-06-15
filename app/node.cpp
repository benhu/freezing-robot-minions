#include "node.h"

using namespace std;

Node::Node(std::string name, int* distances) {
    this->name = name;
    this->child = distances;
}
