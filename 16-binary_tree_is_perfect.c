#include "binary_trees.h"

/**
 * get_depth - Calculate the depth
 * @tree: A pointer to the node to measure the depth
 * Return: the depth
 */

int get_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * is_perfect - Check if the tree is perfect
 * @tree: A pointer to the node to measure the depth
 * @depth: the depth
 * @level: level
 * Return: the depth
 */

int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	/* Check if the tree is empty*/
	if (!tree)
		return (1);

	/* Check the presence of children */
	if (!tree->left && !tree->right)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth, level + 1)
		&& is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: 0 - If tree is NULL
 *         0 - If tree is not perfect
 *         1 - If tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int depth = get_depth(tree);

	return (is_perfect(tree, depth, 0));
}
