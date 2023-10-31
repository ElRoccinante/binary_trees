#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that insert left to a node
 * @parent: A pointer to the parent node.
 * @value: The value to store in the new node.
 * Return: A pointer to the newly inserted node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *save;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left  != NULL)
	{
		save = parent->left;
		new_node->left = save;
		save->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
