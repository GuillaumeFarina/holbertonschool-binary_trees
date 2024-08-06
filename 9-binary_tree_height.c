#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: 0 - If tree is NULL
 *         Otherwith - The height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	if (height_l > height_r)
	{
		return (height_l + 1);
	}
	else
	{
		return (height_r + 1);
	}

}
