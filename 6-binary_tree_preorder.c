#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call on each node's value
 *
 * Description: Visits each node in the order Root -> Left -> Right.
 * Calls func on each node's value. Does nothing if tree or func is NULL.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
