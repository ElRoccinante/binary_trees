#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>

/* Binary Tree Node Structure */
typedef struct binary_tree_s binary_tree_t;
struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

/* Function Prototypes */

/* Function to create a new binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Function to print a binary tree */
void binary_tree_print(const binary_tree_t *tree);

/* Add other function prototypes for binary tree operations here */

#endif /* BINARY_TREES_H */
