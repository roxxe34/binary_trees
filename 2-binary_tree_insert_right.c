#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the righ-child of another node
 *@parent: a pointer to the node to insert the right-child in
 *@value: the value to store in the new node
 *
 *Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;
	binary_tree_t *rightchild;

	if (parent == NULL)
		return (NULL);

	rightNode = binary_tree_node(parent, value);
	if (rightNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
	rightchild = parent->right;
	rightNode->right = rightchild;
	rightchild->parent = rightNode;
	}
	parent->right = rightNode;

	return (rightNode);
}
