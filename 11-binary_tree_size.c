#include "binary_trees.h"

/**
 * binary_tree_size - print the size binary tree
 * @tree: tree for print your size
 * Return: depth the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size =  binary_tree_size(tree->left) + 1 +
			binary_tree_size(tree->right);
	}

	return (size);

}
