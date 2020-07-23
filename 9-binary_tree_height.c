#include "binary_trees.h"

/**
 * binary_tree_height - print the height binary tree
 * @tree: tree for print your height
 * Return: height the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	if (tree != NULL)
	{
		if (tree->left)
			h++;
		if (tree->right)
			h++;

		binary_tree_height(tree->left);
		binary_tree_height(tree->right);
	}

	return (h);

}
