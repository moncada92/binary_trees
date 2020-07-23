#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node for the left in binary tree
 * @parent: is a binary tree
 * @value: value the node
 * Return: binary tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL, *tempLeft = NULL;

	if (parent == NULL)
		return (NULL);

	tmp = calloc(1, sizeof(binary_tree_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
	tmp->parent = parent;

	if (parent->left != NULL)
	{
		tempLeft = parent->left;
		tmp->left = tempLeft;
		tmp->right = NULL;
		tempLeft->parent = tmp;
	}
	parent->left = tmp;

	return (tmp);

}
