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

/**
 * binary_tree_is_avl - Check if a binary tree is a valid AVL Tree
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int avl_left, avl_right;
	size_t ht_left, ht_right, b_avl;

	if (tree == NULL)
		return (0);
	ht_left = binary_tree_height(tree->left);
	ht_right = binary_tree_height(tree->right);
	b_avl = ht_left > ht_right ? ht_left - ht_right : ht_right - ht_left;
	if (b_avl > 1 || tree->n < INT_MIN || tree->n > INT_MAX)
		return (0);
	avl_left = binary_tree_is_avl(tree->left);
	avl_right = binary_tree_is_avl(tree->right);
	return (avl_left && avl_right);
}
