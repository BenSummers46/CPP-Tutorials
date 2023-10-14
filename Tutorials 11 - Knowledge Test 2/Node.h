#pragma once

struct Node {
	int m_Value;
	struct Node* Left;
	struct Node* Right;
	Node(int d) {
		m_Value = d;
		Left = NULL;
		Right = NULL;
	}
};
