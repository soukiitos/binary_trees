#include "binary_trees.h"
/**
 * array_to_bst - Build a Binary Search Tree from an array
 * @array: is a pointer to the first element of the array to be converted
 * @size: is the number of element in the array
 *
 * Return: 0
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tmp;
	size_t new;

	tmp = NULL;
	if (size == 0)
		return (NULL);
	for (new = 0; new < size; new++)
	{
		if (new == 0)
			bst_insert(&tmp, array[new]);
		else
			bst_insert(&tmp, array[new]);
	}
	return (tmp);
}
