#include "binary_trees.h"

/**
 * binary_tree_height - counts the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: The iteration result or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		hl = binary_tree_height(tree->left);
		hr = binary_tree_height(tree->right);

		if (hl > hr)
			return (hl + 1);
		else
			return (hr + 1);
	}
	return (0);
}
