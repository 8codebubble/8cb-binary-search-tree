#include "Node.h"
#ifndef _BinarySearchTree_class_included
#define _BinarySearchTree_class_included
class BinarySearchTree{
	private:		
		Node* createNode(int data);
	public:
		Node* rootNode;
		Node* insertNode(Node* node, int data);
		Node* searchForNode(Node* node, int data);
		BinarySearchTree();
};
#endif
