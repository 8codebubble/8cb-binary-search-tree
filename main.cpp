#include "main.h"

using namespace std;
int main(int argc, char** argv) {	
	
	/*Inserting Nodes*/
	cout <<"Inserting Nodes"<<endl;
	BinarySearchTree* bst = new BinarySearchTree();
	bst->rootNode = bst->insertNode(bst->rootNode,15);
	bst->rootNode = bst->insertNode(bst->rootNode,11);
	bst->rootNode = bst->insertNode(bst->rootNode,20);
	bst->rootNode = bst->insertNode(bst->rootNode,16);
	bst->rootNode = bst->insertNode(bst->rootNode,8);
	bst->rootNode = bst->insertNode(bst->rootNode,24);
	bst->rootNode = bst->insertNode(bst->rootNode,7);
	bst->rootNode = bst->insertNode(bst->rootNode,12);
	cout <<endl<<"Done..."<<endl;
	int search_number;
	cout <<"Enter a number to search for:";
	cin >>search_number;
	cin.ignore();//ignore newline chracter enter generates (mops it up).
	
	
	/* Searching */
	cout <<"Searching For your entered value"<<endl<<endl;
	Node* searchResult = bst->searchForNode(bst->rootNode,search_number);
	cout <<endl<<endl; //formating program output line break;	
	if(searchResult != NULL){
		cout <<endl<<"Found a match at: "<<searchResult<<" For search value: "<<search_number<<endl;
	} else {
		cout <<"Not Found"<<endl;
	}
	
	
	cout <<endl<<"Press ENTER to exit.";
	cin.get();//Hold screen	
	
	return 0;
}
