#include "binary_trees.h"
/**
 * node_insert - Insert node
 * @tree: is a pointer
 * @parent: is a pointer
 * @new: is a pointer
 * @tmp: a value
 *
 * Return: 0
 */
avl_t *node_insert(avl_t **tree, avl_t *parent, avl_t **new, int tmp)
{
	int i;

	if (*tree == NULL)
		return (*new = binary_tree_node(parent, tmp));
	if ((*tree)->n < tmp)
	{
		(*tree)->right = node_insert(&(*tree)->right, *tree, new, tmp);
		if ((*tree)->right == NULL)
			return (NULL);
	}
	else if ((*tree)->n > tmp)
	{
		(*tree)->left = node_insert(&(*tree)->left, *tree, new, tmp);
		if ((*tree)->left == NULL)
			return (NULL);
	}
	else
		return (*tree);
	i = binary_tree_balance(*tree);
	if (i > 1 && (*tree)->left->n > tmp)
	{
		*tree = binary_tree_rotate_right(*tree);
	}
	else if (i > 1 && (*tree)->left->n < tmp)
	{
		(*tree)->left = binary_tree_rotate_left((*tree)->left);
		*tree = binary_tree_rotate_right(*tree);
	}
	else if (i < -1 && (*tree)->right->n < tmp)
	{
		*tree = binary_tree_rotate_left(*tree);
	}
	else if (i < -1 && (*tree)->right->n > tmp)
	{
		(*tree)->right = binary_tree_rotate_right((*tree)->right);
		*tree = binary_tree_rotate_left(*tree);
	}
	return (*tree);
}

/**
 * avl_insert - Insert a value in an AVL Tree
 * @tree:  is a double pointer to the root node of
 * the AVL tree for inserting the value
 * @value: is the value to store in the node to be inserted
 *
 * Return: 0
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *new = NULL;

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	node_insert(tree, *tree, &new, value);
	return (new);
}
