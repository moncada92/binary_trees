#include "binary_trees.h"
int max(int a, int b);
size_t height(const binary_tree_t *tree);

/**
 * max - return the max value
 * @a: nodes the left the tree
 * @b: node the right the tree
 * Return: num max
 */

int max(int a, int b)
{
	if (a > b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

/**
 * height - height binary tree
 * @tree: tree
 * Return: height binary tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t left, right;
	int total;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);
	total = max(left, right) + 1;
	return (total);
}

/**
 * binary_tree_height - print the height binary tree
 * @tree: tree for print your height
 * Return: height the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int r = 0;

	if (tree == NULL)
		return (0);

	r = height(tree);
	return (r - 1);
}
