#include "binary_trees.h"

/**
 * binary_tree_depth - print the depth binary tree
 * @tree: tree for print your height
 * Return: depth the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree != NULL)
	{
		while (tree->parent)
		{
			d++;
			tree = tree->parent;
		}
	}

	return (d);
}
