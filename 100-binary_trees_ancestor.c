#include "binary_trees.h"
/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second:  is a pointer to the second node
 *
 * Return: 0
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *i = first, *j = second;

	while (i != j)
	{
		if (!i || !j)
			return (NULL);
		i = i->parent ? i->parent : second;
		j = j->parent ? j->parent : first;
	}
	return ((binary_tree_t *) i);
}
