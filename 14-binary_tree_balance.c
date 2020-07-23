#include "binary_trees.h"
int height(const binary_tree_t *tree);
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
 * height - calculate height the binary tree
 * @tree: binary tree
 * Return: heoght the binary tree
 */

int height(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (1 + max(height(tree->left), height(tree->right)));
}

/**
 * binary_tree_balance - calculate balance the tree
 * @tree: binary tree for calulcate balance
 * Return: blaance the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree != NULL)
	{

		left = height(tree->left);

		right = height(tree->right);

	}


	return (left - right);
}
