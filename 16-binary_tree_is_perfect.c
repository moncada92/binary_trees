#include "binary_trees.h"
int findADepth(const binary_tree_t *node);
int is_perfect(const binary_tree_t *tree, int d, int level);

/**
 * findADepth - calculate depth the binary tree
 * @node: tree for calculate depth
 * Return: depth the bnary tree
 */
int findADepth(const binary_tree_t  *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
 * is_perfect - check the tree is full
 * @tree: tree for cheked if is full
 * @d: depth the tree
 * @level: level that the tree
 * Return: 1 if it is full otherwise 0
 */

int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (d == level + 1)
			return (1);
		else
			return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}


/**
 * binary_tree_is_perfect - calculate if is perfect bnary tree
 * @tree: tree for calulcate if perfect
 * Return: 1 if it is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0, d = 0;

	d = findADepth(tree);
	result = is_perfect(tree, d, 0);

	return (result);
}
