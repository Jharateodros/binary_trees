#include "binary_tress.h"

/**
 * binary_tree_preorder - A function that goes through a binary
 * @tree: using pre-order traversal
 * @func: the pointer to the function to call on each node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
