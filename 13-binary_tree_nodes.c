#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the number of nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Number of nodes in the tree or 0 if the tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
int num = 1;
if (tree == NULL || (tree->right == NULL && tree->left == NULL))
	return (0);
num += binary_tree_nodes(tree->right);
num += binary_tree_nodes(tree->left);
return (num);
}
