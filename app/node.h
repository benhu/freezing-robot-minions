#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <map>
 
class Node{

	public:
		Node();
		~Node();
	private:
	    int distance;
        std::map<int,Node*> child;
};

#endif
