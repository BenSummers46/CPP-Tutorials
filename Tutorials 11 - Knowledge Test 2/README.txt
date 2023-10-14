Binary Search Tree Task:

In this task you will try to implement the most of the functions that are found in the Binary Search Tree class that gives the class its basic functionality.
Before you start I would recommend you read up and become familiar with exactly what a Binary Search Tree (BST) is. https://en.wikipedia.org/wiki/Binary_search_tree

I have made the foundations for you. A BST is made up of Nodes which contain a value along with references to the nodes to the left and right (note nodes can be NULL).
You can view the struct that makes up a node in the Node.h header file. A struct is just a way of grouping variables together into a common structure, acts much like a class does.

I have also implemented the declaration of the BST class, along with the functions and variables that make up the BST structure.
Your job in this task is to implement the bodies of the BST functions which have been outlined in BST.cpp.

	- TerminateTree(struct Node* Tree) - loop through all nodes in the tree and delete them (free the allocated memory.).
	- InsertNode(struct Node** Tree, int Value) - Inserts a new node into the tree in the correct position.
	- PrintInOrder(struct Node* Tree) - Loops through the tree and prints the value of each node in order.
	- SearchTree(struct Node* Tree, int Key) - Searches the tree and returns true if a node of that value exists, returns false if it does not exist.

To test your functions work you can build your tree in the main() function by simply calling the functions on the BST object I have already created for you.