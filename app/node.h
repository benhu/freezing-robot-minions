#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <map>
 
class Node{

	public:
        Node();
        Node(std::string name,int id, int* distance);
		~Node();

		void reduceBanana(int tx);

        int id;
        int* banana;
	private:
        std::string name;
        int* child;
};

#endif
