#include "binary_trees.h"
/**
 * binary_tree_depth - Mesure the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;

	d = 0;
	for (; tree && tree->parent; d++)
	{
		tree = tree->parent;
	}
	return (d);
}
