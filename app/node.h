#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <map>
 
class Node{

	public:
		Node();
        Node(int);
		~Node();
        void addChild(int,Node*);
	private:
	    int name;
        std::map<int,Node*> child;
};

#endif
