#include "binary_trees.h"
/**
 * bst_insert - Insert a value in a Binary Search Tree
 * @tree: is a double pointer to the root node of the BST to insert the value
 * @value: is the value to store in the node to be inserted
 *
 * Return: 0
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp = *tree;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = (bst_t *)binary_tree_node((binary_tree_t *)*tree, value);
		return (*tree);
	}
	while (tmp)
	{
		if (value > tmp->n)
		{
			if (tmp->right)
				tmp = tmp->right;
			else
			{
				tmp->right = (bst_t *)binary_tree_node((binary_tree_t *)tmp, value);
				return (tmp->right);
			}
		}
		else if (value < tmp->n)
		{
			if (tmp->left)
				tmp = tmp->left;
			else
			{
				tmp->left = (bst_t *)binary_tree_node((binary_tree_t *)tmp, value);
				return (tmp->left);
			}
		}
		else
			return (NULL);
	}
	return (NULL);
}
