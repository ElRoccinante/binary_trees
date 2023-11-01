#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree
 * Return: number leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
	}
	return (0);
}
