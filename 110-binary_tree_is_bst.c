#include "binary_trees.h"
/**
 * bst_recursive - Check if a tree is bst
 * @tree: is a pointer
 * @new: is a pointer
 *
 * Return: 0
 */
int bst_recursive(const binary_tree_t *tree, const binary_tree_t **new)
{
	if (tree == NULL)
		return (1);
	if (!bst_recursive(tree->left, new))
		return (0);
	if (*new && (*new)->n >= tree->n)
		return (0);
	*new = tree;
	return (bst_recursive(tree->right, new));
}

/**
 * binary_tree_is_bst - Check if a binary tree is a valid Binary Search Tree
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	const binary_tree_t *new = NULL;

	return (bst_recursive(tree, &new));
}
