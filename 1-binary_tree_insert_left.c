#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: a pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *
 *Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;
	binary_tree_t *leftchild;

	if (parent == NULL)
		return (NULL);

	leftNode = binary_tree_node(parent, value);
	if (leftNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
	leftchild = parent->left;
	leftNode->left = leftchild;
	leftchild->parent = leftNode;
	}
	parent->left = leftNode;

	return (leftNode);
}
