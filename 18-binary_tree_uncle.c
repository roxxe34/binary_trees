#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: A pointer to the node to find the uncle of it
 * Return: If has no uncle NULL
 *         Otherwise a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent->parent == NULL
		|| node->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
