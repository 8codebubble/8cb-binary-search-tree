#include "main.h"
using namespace std;

//constructor
BinarySearchTree::BinarySearchTree(){
	this->rootNode = NULL;
}

//createNode implementation
Node* BinarySearchTree::createNode(int data){
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;	
	cout <<"("<<newNode<<"="<<newNode->data<<")\t";
	return newNode;
}
//insertNode implementation
Node* BinarySearchTree::insertNode(Node* node, int data){	
	if(node == NULL){ //empty branch
		node = createNode(data);		
	}
	else if(data <= node->data){ //if data to be inserted is equal or less than (node) insert to the left		
		node->left = this->insertNode(node->left,data);			
	} else {// if data is more than the data in (node) insert on the right.		
		node->right = this->insertNode(node->right,data);		
	}	
	return node;
}

//searchForNode implementation
Node* BinarySearchTree::searchForNode(Node* node, int data){
	if (node != NULL ) cout <<"(NODE="<<node->data<<")";
	if(node == NULL){
		return NULL;
	} else if(node->data == data){
		cout <<"#This matches Search"<<endl;
		return node; //return node if the data matches
	} else if(data <= node->data ){
		cout <<"-[left edge]-";
		return searchForNode(node->left,data);
	} else {
		cout <<"-[right edge]-";
		return searchForNode(node->right,data);
	}	
	return NULL;// should never reach here;
}
