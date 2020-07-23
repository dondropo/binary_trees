#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaf nodes
 * @tree: root
 * Return: 0 || NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	return (r + l);
}
