#include "binary_trees.h"
int max(int a, int b);

/**
 * max - return the max value
 * @a: nodes the left the tree
 * @b: node the right the tree
 * Return: num max
 */

int max(int a, int b)
{
	if (a >= b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

/**
 * binary_tree_height - print the height binary tree
 * @tree: tree for print your height
 * Return: height the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(height(tree->left), height(tree->right)));

}
