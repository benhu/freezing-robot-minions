#include "graph.h"

Graph::Graph() {
    this->firstNode = new Node(0);
}

Node* Graph::getRoot() {
    return this->firstNode;
}
