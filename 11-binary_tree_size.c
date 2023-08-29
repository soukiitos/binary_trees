#include "binary_trees.h"
/**
 * binary_tree_size - Mesure the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s_left, s_right;

	if (tree == NULL)
		return (0);
	s_left = binary_tree_size(tree->left);
	s_right = binary_tree_size(tree->right);
	return (s_left + s_right + 1);
}
