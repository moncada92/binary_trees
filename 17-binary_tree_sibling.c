#include "binary_trees.h"

/**
 * binary_tree_sibling - fin the sibling node
 * @node: node for find your sibling
 * Return: value the node sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL)
		return (NULL);

	if (node != NULL)
	{
		if (node->parent->left->n == node->n)
		{
			if (node->parent->right != NULL)
			{
				return (node->parent->right);
			}
			else
			{
				return (NULL);
			}
		}
		else if (node->parent->right->n == node->n)
		{
			if (node->parent->left != NULL)
			{
				return (node->parent->left);
			}
			else
			{
				return (NULL);
			}
		}
	}
	return (NULL);
}
