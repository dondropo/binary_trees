#include "binary_trees.h"
/**
 * binary_tree_height - finds height of tree
 * @tree: treee
 * Return: 0 || NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ri, le;

	if (tree == NULL)
		return (0);
	le = binary_tree_height(tree->left);
	ri = binary_tree_height(tree->right);
	if (ri > l)
		return (ri + 1);
	return (le + 1);
}
/**
 * binary_tree_balance - balance
 * @tree: tree
 * Return: 0 || NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
