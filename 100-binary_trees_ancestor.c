#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the LCA of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mutter, *vater;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mutter = first->parent, vater = second->parent;
	if (first == vater || !mutter || (!mutter->parent && vater))
		return (binary_trees_ancestor(first, vater));
	else if (mutter == second || !vater || (!vater->parent && mutter))
		return (binary_trees_ancestor(mutter, second));
	return (binary_trees_ancestor(mutter, vater));
}
