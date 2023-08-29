#include "binary_trees.h"
/**
 * binary_tree_height - Mesure the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);
	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((h_left > h_right) ? h_left : h_right);
}
