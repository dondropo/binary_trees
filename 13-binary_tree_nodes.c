#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least
 * 1 child in a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: the iteration result
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);

	return (l + r + 1);
}
