#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include "node.h"
//using namespace std; INTERDIT ma cherie SEULEMENT dans le cpp
 
class Graph{

	public:
		Graph();
		~Graph();
        Node* getRoot();
	private:
		Node* firstNode;
        int** distances;
        std::string* label;
};

#endif
