#include "binary_trees.h"
/**
 * _count - Count the number of nodes
 * @rec: The root of the node
 *
 * Return: 0
 */
int _count(const binary_tree_t *rec)
{
	if (!rec)
		return (0);
	return (1 + _count(rec->left) + _count(rec->right));
}

/**
 * recursive - Check if the tree is complete
 * @rec: the root of the node
 * @i: the index
 * @j: the number of nodes
 *
 * Return: 0
 */
int recursive(const binary_tree_t *rec, int i, int j)
{
	if (!rec)
		return (1);
	if (i >= j)
		return (0);
	return (recursive(rec->left, 2 * i + 1, j) &&
			recursive(rec->right, 2 * i + 2, j));
}

/**
 * binary_tree_is_complete - Check if a binary tree is complete
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursive(tree, 0, _count(tree)));
}
