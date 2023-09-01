#include "binary_trees.h"

/**
 *binary_tree_height - measures height of tree
 *@tree: pointer to the root node
 *Return: size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			left_depth = 1 + binary_tree_height(tree->left);
		}
		else
		{
			left_depth = 0;
		}

		if (tree->right != NULL)
		{
			right_depth = 1 + binary_tree_height(tree->right);
		}
		else
		{
			right_depth = 0;
		}
	}
	if (left_depth > right_depth)
	{
		return (left_depth);
	}
	else
	{
		return (right_depth);
	}
}
