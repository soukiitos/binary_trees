#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Perform a left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 *
 * Return: 0
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new = tree->right, *tmp = new->left;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	new->left = tree;
	tree->right = tmp;
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
