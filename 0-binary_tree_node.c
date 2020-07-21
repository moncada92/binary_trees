#include "binary_trees.h"

/**
 * binary_tree_node - create and insert node in binary tree
 * @parent: is a binary tree
 * @value: value the node
 * Return: binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	tmp = malloc(sizeof(binary_tree_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
	tmp->parent = parent;
	tmp->left = NULL;
	tmp->right = NULL;

	return (tmp);

}
