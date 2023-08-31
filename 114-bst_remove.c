#include "binary_trees.h"
/**
 * bst_remove - Remove a node from a Binary Search Tree
 * @root: is a pointer to the root node of the tree
 * where you will remove a node
 * @value: is the value to remove in the tree
 *
 * Return: 0
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp;

	if (root == NULL)
		return (NULL);
	if (value == root->n)
	{
		if (root->left == NULL)
		{
			tmp = root->right;
			free(root);
			return (tmp);
		}
		else if (root->right == NULL)
		{
			tmp = root->left;
			free(root);
			return (tmp);
		}
		tmp = root->right;
		while (tmp->left != NULL)
			tmp = tmp->left;
		root->n = tmp->n;
		root->right = bst_remove(root->right, tmp->n);
	}
	else if (value < root->n)
		root->left = bst_remove(root->left, value);
	else
		root->right = bst_remove(root->right, value);
	return (root);
}
