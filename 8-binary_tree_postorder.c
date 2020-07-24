#include "binary_trees.h"

/**
 * binary_tree_postorder - print tree in postorder
 * @tree: tree for print the values node
 * @func: function the print tree
 * Return: nothing is void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}

}
