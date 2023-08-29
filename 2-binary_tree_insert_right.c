#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: 0
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);
	if (!new)
		return (NULL);
	new->right = parent->right;
	if (new->right)
		new->right->parent = new;
	parent->right = new;
	return (new);
}
