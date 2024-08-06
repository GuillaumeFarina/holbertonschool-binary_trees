#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * Return: 0 - If tree is NULL
 *         0 - If tree is not full
 *         1 - If tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);


	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));

	return (0);
}
