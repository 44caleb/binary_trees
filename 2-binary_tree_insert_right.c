#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts right
 * @parent: pointer to parent node
 * @value: node data
 * Return: pointre to inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *prev_right_child;
	binary_tree_t *new_right_child;

	if (parent == NULL)
	{
		return (NULL);
	}

	prev_right_child = parent->right;
	new_right_child = binary_tree_node(parent, value);
	parent->right = new_right_child;
	new_right_child->right = prev_right_child;

	if (prev_right_child != NULL)
	{
		prev_right_child->parent = new_right_child;
	}

	return (new_right_child);
}
