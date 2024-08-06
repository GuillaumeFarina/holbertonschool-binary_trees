#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: A pointer to the sibling node
 *         NULL - If node is NULL or the parent is NULL
 *         NULL - If node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}

}
