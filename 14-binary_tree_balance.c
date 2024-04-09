#include "binary_trees.h"
/**
 * binary_tree_balance - measures balance factor of tree
 *
 * @tree: pointer to tree in question
 *
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree)
	{
		balance = (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (balance);
}

/**
 * binary_tree_height - measures height of binary tree
 *
 * @tree: tree in question
 *
 * Return: size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		if (tree->left != NULL)
			left = 1 + binary_tree_height(tree->left);
		else
			left = 1;
		if (tree->right != NULL)
			right = 1 + binary_tree_height(tree->right);
		else
			right = 1;
		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}
