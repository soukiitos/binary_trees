#include "binary_trees.h"
/**
 * array_to_avl - Build an AVL tree from an array
 * @array: is a pointer to the first element of the array to be converted
 * @size: is the number of element in the array
 *
 * Return: 0
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *n_arr;
	size_t i, j;

	n_arr = NULL;
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (i == j)
			if (avl_insert(&n_arr, array[i]) == NULL)
				return (NULL);
	}
	return (n_arr);
}
