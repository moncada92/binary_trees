#include "binary_trees.h"

/**
 * binary_tree_uncle - fin the unlce node
 * @node: node for find your uncle
 * Return: value the node uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - fin the sibling node
 * @node: node for find your sibling
 * Return: value the node sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *s;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		s = node->parent->right;
	else
		s = node->parent->left;
	return (s);
}
