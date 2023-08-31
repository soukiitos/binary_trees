#include "binary_trees.h"
/**
 * binary_tree_rotate_right - Perform a right-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 *
 * Return: 0
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new = tree->left, *tmp = new->right;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	new->right = tree;
	tree->left = tmp;
	if (tmp)
		tmp->parent = tree;
	new->parent = tree->parent;
	tree->parent = new;
	if (new->parent)
	{
		if (new->parent->left != tree)
			new->parent->right = new;
		else
			new->parent->left = new;
	}
	return (new);
}
