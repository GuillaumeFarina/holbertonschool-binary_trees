#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
 * binary_tree_ancestor - Find the lowest common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 * Return: A pointer to the lowest common ancestor node of the two given nodes
 *         NULL - If no common ancestor was found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{

	int fdepth;
	int sdepth;

	if (!first || !second)
		return (NULL);

	fdepth = binary_tree_depth(first);
	sdepth = binary_tree_depth(second);


	while (fdepth > sdepth)
	{
		first = first->parent;
		fdepth--;
	}

	while (fdepth < sdepth)
	{
		second = second->parent;
		sdepth--;
	}


	while (first && second)
	{
		if (first == second)
		{
			return ((binary_tree_t *)first);
		}

		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}
