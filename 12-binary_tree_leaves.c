#include "binary_trees.h"

/**
 * binary_tree_leaves - print the size binary tree
 * @tree: tree for print your leaves
 * Return: depth the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			l++;
		if (tree->left != NULL)
			l++;
		if (tree->right != NULL)
			l++;

		binary_tree_leaves(tree->left);
		binary_tree_leaves(tree->right);
	}

	return (l);

}
