#include "binary_trees.h"
/**
 * binary_tree_height - height of a tree
 * @tree: tree
 * Return: 0 || NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ri, le;

	if (tree == NULL)
		return (0);
	le = binary_tree_height(tree->left);
	ri = binary_tree_height(tree->right);
	if (ri > le)
		return (ri + 1);
	return (le + 1);
}
/**
 * binary_tree_is_perfect - checks if perfect
 * @tree: tree
 * Return: 1 || 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
