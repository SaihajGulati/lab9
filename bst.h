#ifndef BST_H
#define BST_H

#include <vector>

class Node {
public:
	Node(Node *left, Node *right, int key) {
		this->left = left;
		this->right = right;
		this->key = key;
	};

	Node(int key) {
		this->left = nullptr;
		this->right = nullptr;
		this->key = key;
	}

    Node *left;
    Node *right;
    int key;
};

/// @brief Checks if a binary tree is height-balanced. A tree is height-balanced if its empty or both its children are balanced and have a height different of at most 1.
/// @param root The root node of the tree to check
/// @return Whether the binary tree is height-balanced
bool isBalanced(Node *root);

#endif