#include "binary_trees.h"

/**
 * binary_tree_uncle - fin the unlce node
 * @node: node for find your uncle
 * Return: value the node uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node != NULL)
	{
		if (node->parent->parent->left->n == node->parent->n)
		{
			if (node->parent->parent->right != NULL)
			{
				return (node->parent->parent->right);
			}
			else
			{
				return (NULL);
			}
		}
		else if (node->parent->parent->right->n == node->parent->n)
		{
			if (node->parent->parent->left != NULL)
			{
				return (node->parent->parent->left);
			}
			else
			{
				return (NULL);
			}
		}
	}
	return (NULL);
}
