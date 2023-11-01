#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of binary tree
* @tree: Pointer node of the tree to measure the height
*
* Return: 0 if the tree = NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t le = 0, ra = 0;

		le = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		ra = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((le > ra) ? le : ra);
	}
	return (0);
}
