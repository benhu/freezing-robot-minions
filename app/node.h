#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <map>
 
class Node{

	public:
        Node();
        Node(std::string name, int* distance);
		~Node();
	private:
        std::string name;
        int* child;
};

#endif
