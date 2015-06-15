#include "node.h"

using namespace std;

Node::Node() {
}

Node::Node(std::string name, int id, int* distances) {
    this->name = name;
    this->child = distances;
    this->id = id;
    this->banana = new int[29];
}

Node::~Node() {
}


void Node::reduceBanana(int tx){

	for(int nb = 0; nb < 29; ++nb) {
        this->banana[nb] -= tx;
    }
}