#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node for the right in binary tree
 * @parent: is a binary tree
 * @value: value the node
 * Return: binary tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL, *tempRight = NULL;

	if (parent == NULL)
		return (NULL);

	tmp = calloc(1, sizeof(binary_tree_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
        tmp->parent = parent;

	if (parent->right != NULL)
	{
		tempRight = parent->right;
		tmp->right = tempRight;
		tmp->left = NULL;
		tempRight->parent = tmp;
	}
	parent->right = tmp;

	return (tmp);

}
