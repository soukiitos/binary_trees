#include "binary_trees.h"
/**
 * binary_tree_height - Mesure the height of a binary tree
 * @tree: is a pointer to the root node of the tree to mesure the height
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
 * print_node - Print nodes
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: The function
 * @i_node: The node to print
 *
 * Return: 0
 */
void print_node(const binary_tree_t *tree, void (*func)(int), size_t i_node)
{
	if (!tree)
		return;
	if (i_node > 1)
	{
		print_node(tree->left, func, i_node - 1);
		print_node(tree->right, func, i_node - 1);
	}
	else if (i_node == 1)
		func(tree->n);
}

/**
 * binary_tree_levelorder - Traverse a binary tree using level-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 *
 * Return: 0
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i_node = 1;

	if (!tree || !func)
		return;
	h = binary_tree_height(tree);
	while (i_node <= h)
	{
		++i_node;
		if (i_node > 1)
		{
			print_node(tree->left, func, i_node - 1);
			print_node(tree->right, func, i_node - 1);
		}
		else if (i_node == 1)
			func(tree->n);
	}
}
