#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: 0
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	new->left = parent->left;
	if (new->left)
		new->left->parent = new;
	parent->left = new;
	return (new);
}
