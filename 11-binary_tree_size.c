#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: pointer to the root node
 *
 * Return: the iteration result or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (tree == NULL)
		return (0);

	hl = binary_tree_size(tree->left);
	hr = binary_tree_size(tree->right);

	return (hl + hr + 1);
}
