#include "binary_trees.h"
/**
 * binary_tree_is_root - Check if a given node is a root
 * @node: is a pointer to the node to check
 *
 * Return: 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
