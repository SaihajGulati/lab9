#include "bst.h"

#include <stack>
#include <queue>
#include <set>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>


/// @brief Calculates the height of the tree if it is balanced. Otherwise returns -1.
/// @param root The root of the tree to calculate height of
/// @return the height of the tree if its balanced, otherwise -1
int calculateHeightIfBalanced(Node* root) {
	// Base case: an empty tree is always balanced and has a height of 0
	if (root == nullptr) return 0;

	// Think about cases to handle:
	// - What if at least one subtree is NOT balanced?
	// - What if BOTH are balanced?

	// TODO: handle the cases here
}

bool isBalanced(Node *root) {
	// TODO: use your helper function (calculateHeightIfBalanced) well!
}
