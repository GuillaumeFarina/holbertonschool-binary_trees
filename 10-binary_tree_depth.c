#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 * Return: 0 - If tree is NULL
 *         Otherwith - The depth of a node in a binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		if (tree->parent)
		{
			depth += 1 + binary_tree_depth(tree->parent);
		}
	}

	return (depth);

}
