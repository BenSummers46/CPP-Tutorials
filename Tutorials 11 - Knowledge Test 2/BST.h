#pragma once

#include "Node.h"

class BST {
public:
	BST(Node* RootNode);
	~BST();

	void InsertNode(struct Node** Tree, int Value);
	void PrintInOrder(struct Node* Tree);
	bool SearchTree(struct Node* Tree, int Key);
	void TerminateTree(struct Node* Tree);

	Node** GetRoot() {
		return &Root;
	}

protected:
	Node* m_Root;
};