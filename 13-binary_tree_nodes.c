#include "binary_trees.h"
/**
 * binary_tree_nodes - Count the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree
 * to count the number of nodes
 *
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_left = 0, n_right = 0;

	if (tree == NULL)
		return (0);
	n_left = binary_tree_nodes(tree->left);
	n_right = binary_tree_nodes(tree->right);
	return (n_left + n_right + ((tree->left || tree->right) ? 1 : 0));
}
