#include "binary_trees.h"
/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal.
 * @tree: Pointer to the root of the binary tree.
 * @func: Pointer to a function to be called on each node.
 *
 * This function traverses the binary tree in level-order (breadth-first) and
 * applies the given function to each node it visits.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **queue, *current;
	int rear = 0, front = 0;

	queue = malloc(sizeof(binary_tree_t *) * 1024);
	if (queue == NULL)
		return;

	queue[rear] = (binary_tree_t *)tree;
	rear++;

	while (rear > front)
	{
		current = queue[front];
		front++;
		func(current->n);

		if (current->left != NULL)
		{
			queue[rear] = current->left;
			rear++;
		}
		if (current->right != NULL)
		{
			queue[rear] = current->right;
			rear++;
		}
	}
	free(queue);
}
