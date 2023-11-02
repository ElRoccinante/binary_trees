#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes in a binary tree.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node or NULL if no common ancestor is found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second->parent)
		return ((binary_tree_t *)first);

	else if (second == first->parent)
		return ((binary_tree_t *)second);

	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);

	else if (second->parent->parent != NULL &&
			 first->parent == second->parent->parent)
		return ((binary_tree_t *)first->parent);

	else if (first->parent->parent != NULL &&
			 second->parent == first->parent->parent)
		return ((binary_tree_t *)second->parent);
	return (NULL);
}
