#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call on each node's value
 *
 * Description: Visits each node in the order Left -> Right -> Root.
 * Calls func on each node's value. Does nothing if tree or func is NULL.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
