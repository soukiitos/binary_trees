#include "binary_trees.h"
/**
 * binary_tree_height - Mesure the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	return ((h_left > h_right) ? h_left + 1 : h_right + 1);
}
