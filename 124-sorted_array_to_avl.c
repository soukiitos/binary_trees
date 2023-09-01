#include "binary_trees.h"
/**
 * sorted_array - Build a tree from an array
 * @parent: a pointer
 * @array: a pointer
 * @beg: the array's beginning
 * @end: the array's end
 *
 * Return: 0
 */
avl_t *sorted_array(avl_t *parent, int *array, int beg, int end)
{
	avl_t *tmp;
	int i = 0;
	binary_tree_t *new;

	if (beg <= end)
	{
		i = (beg + end) / 2;
		new = binary_tree_node((binary_tree_t *)parent, array[i]);
		if (new == NULL)
			return (NULL);
		tmp = (avl_t *)new;
		tmp->left = sorted_array(tmp, array, beg, i - 1);
		tmp->right = sorted_array(tmp, array, i + 1, end);
		return (tmp);
	}
	return (NULL);
}

/**
 * sorted_array_to_avl - Build an AVL tree from an array
 * @array: is a pointer to the first element of the array to be converted
 * @size: is the number of element in the array
 *
 * Return: 0
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return (NULL);
	return (sorted_array(NULL, array, 0, ((int)(size)) - 1));
}
