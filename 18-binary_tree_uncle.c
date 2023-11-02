#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node for which the uncle is found.
 *
 * Return: Pointer to the uncle node or NULL if there is no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *ancestor, *parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	ancestor = node->parent->parent;
	parent = node->parent;
	if (ancestor->left == parent && ancestor->right != NULL)
		return (ancestor->right);
	else if (ancestor->right == parent && ancestor->left != NULL)
		return (ancestor->left);
	return (NULL);
}
