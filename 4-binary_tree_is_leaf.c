#include "binary_trees.h"

/**
 * binary_tree_is_leaf - detect if the node is leaf
 * @node: node for detect if is leaf
 * Return: 1 if the node is leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int result = 0;

	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
		{
			result = 1;
		}
	}

	return (result);

}
