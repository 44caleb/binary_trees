#include "binary_trees.h"

/**
 *binary_tree_inorder - traverses a tree in-order
 *@tree: pointer to the root node of tree
 *@func: pointer to function that displays node
 *Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
