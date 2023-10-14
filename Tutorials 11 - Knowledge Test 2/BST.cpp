#include <iostream>

#include "Node.h"
#include "BST.h"

struct Node* Root = NULL;

BST::BST(Node* Root) {
	m_Root = Root;
}

BST::~BST() {
	TerminateTree(Root);
}

void BST::TerminateTree(struct Node* Tree) {

}

void BST::InsertNode(struct Node** Tree, int Value) {

}

void BST::PrintInOrder(struct Node* Tree) {

}

bool BST::SearchTree(struct Node* Tree, int Key) {

}


int main(void) {
	BST Tree(Root);
	
	
	return 0;
}