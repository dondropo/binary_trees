#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new node right
 * @parent: parent node
 * @value: node value
 * Return: new node || NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;
	parent->right = new_node;

	if (new_node->right != NULL)
		new_node->right->parent = new_node;

	return (new_node);
}
