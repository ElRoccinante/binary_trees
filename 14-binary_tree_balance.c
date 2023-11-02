#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: the result
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int countLeft = 0, countRight = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL)
countLeft = binary_tree_height(tree->left) + 1;
if (tree->right != NULL)
countRight = binary_tree_height(tree->right) + 1;
return (countLeft - countRight);
}
/**
 * max - returns max of two values
 * @value1: value 1
 * @value2: value 1
 * Return: the maximum
 */
size_t max(size_t value1, size_t value2)
{
if (value1 < value2)
return (value2);
return (value1);
}
/**
 * binary_tree_height - function that calculate the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: positive number or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;

if (tree == NULL || (tree->left == NULL && tree->right == NULL))
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (max(left_height, right_height) + 1);
}
