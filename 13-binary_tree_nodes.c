#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root of the node of the tree to count total of nodes
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total_nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		total_nodes++;

	if (tree->right)
		total_nodes += binary_tree_nodes(tree->right);

	if (tree->left)
		total_nodes += binary_tree_nodes(tree->left);

	return (total_nodes);
}
