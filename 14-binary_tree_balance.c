#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 *        the balance factor
 * Return: 0 - If tree is NULL
 *         Otherwith - The balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;

	if (tree)
	{

		height_l = binary_tree_height(tree->left);
		height_r = binary_tree_height(tree->right);

	}

	return (height_l - height_r);

}
