#include "binary_trees.h"

/**
  * binary_tree_is_leaf - check if its a leaf node
  * @node: given node
  *
  * Return: 1 || 0
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->right == NULL && node->left == NULL)
			return (1);
	}
	return (0);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node
 *
 * Return: 1 if is full, 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	if (l == 0 || r == 0)
		return (0);
	return (1);
}
