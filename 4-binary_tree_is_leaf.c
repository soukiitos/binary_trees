#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: is a pointer to the node to check
 *
 * Return: 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right);
}
