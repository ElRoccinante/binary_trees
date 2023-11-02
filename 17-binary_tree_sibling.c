#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: Pointer to the node for which the sibling is found.
 *
 * Return: Pointer to the sibling node or NULL if there is no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	tmp = node->parent;
	if (tmp->left == node && tmp->right != NULL)
		return (tmp->right);
	else if (tmp->right == node && tmp->left != NULL)
		return (tmp->left);
	return (NULL);
}
