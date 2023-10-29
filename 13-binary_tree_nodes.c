#include "binary_trees.h"
/**
 * binary_tree_nodes - function that returns num of nodes in
 *  tree with children
 * @tree: tree to check
 * Return: number of nodes with 1 children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		nodes += ((tree->left || tree->right) ? 1 : 0);
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
		return (nodes);
	}
}
