#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count
 *        the number of leaves
 * Return: 0 - If tree is NULL
 *         Otherwith - The number of the leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			count++;
		}

		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);

	}

	return (count);

}
