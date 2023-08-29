#include "binary_trees.h"
/**
 * binary_tree_leaves - Count the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree
 * to count the number of leaves
 *
 * Return: 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_left, l_right;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	l_left = binary_tree_leaves(tree->left);
	l_right = binary_tree_leaves(tree->right);
	return (l_left + l_right);
}
