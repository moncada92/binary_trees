#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes in binary tree
 * @tree: tree for count your nodes
 * Return: nodes the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			n = 1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left);
			return (n);
		}
	}

	return (n);

}
