#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node for which to measure the depth
 *
 * Return: The depth of the node, 0 if @tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* Recursively calculate the depth of the current node */
	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);  /* The root node has a depth of 0 */
}
