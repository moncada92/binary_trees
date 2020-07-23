#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes in binary tree
 * @tree: tree for count your nodes
 * Return: nodes the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			l++;
		if (tree->right != NULL)
			l++;
		if (tree->parent == NULL)
			l++;

		binary_tree_nodes(tree->left);
		binary_tree_nodes(tree->right);
	}

	return (l);

}
