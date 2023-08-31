#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node left
 *@parent: parent of node
 *@value: data of node
 *Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* variable to store value of left child*/
	binary_tree_t *prev_left_child;
	binary_tree_t *new_left_child;

	if (parent == NULL)
	{
		return (NULL);
	}
	/*stores value of prev left child*/
	prev_left_child = parent->left;

	/* creates a new left_child for the parent node*/
	new_left_child = binary_tree_node(parent, value);
	new_left_child->left = prev_left_child;
	parent->left = new_left_child;


	/* makes prev_left_child the child of the new_left_child*/
	if (prev_left_child != NULL)
	{
		prev_left_child->parent = new_left_child;
	}
	return (new_left_child);
}
