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
