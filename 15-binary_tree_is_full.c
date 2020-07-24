#include "binary_trees.h"

/**
 * binary_tree_is_full - check the tree is full
 * @tree: tree for cheked if is full
 * Return: 1 if it is full otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}

		if (tree->left != NULL || tree->right != NULL)
		{
			return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
		}
	}
	return (0);
}
