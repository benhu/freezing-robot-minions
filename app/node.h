#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <map>
 
class Node{

	public:
        Node();
        Node(std::string name,int id, int* distance);
		~Node();
        int id;
	private:
        std::string name;
        int* child;
};

#endif
