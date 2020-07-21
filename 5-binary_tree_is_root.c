#include "binary_trees.h"

/**
 * binary_tree_is_root - detect if the node is root
 * @node: node for detect if is root
 * Return: 1 if the node is root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int result = 0;

	if (node != NULL)
	{
		if (node->parent == NULL)
		{
			result = 1;
		}
	}

	return (result);

}
