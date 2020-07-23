#include "binary_trees.h"

/**
 * binary_tree_preorder - print tree in preorder
 * @tree: tree for print the values node
 * @func: function the print tree
 * Return: nothing is void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}

}