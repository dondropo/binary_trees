#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth
 * @tree: tree
 * Return: 0 || NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	for (depth = 0; tree->parent; depth++)
		tree = tree->parent;
	return (depth);
}
