#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root
 * @node: the node to check
 * Return: 0 if node is not the root, Otherwise returns 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent)
		return (0);
	else
		return (1);
}
