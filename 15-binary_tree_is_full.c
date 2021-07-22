#include "binary_trees.h"
/**
* binary_tree_is_full -  a function that checks if a binary tree is full
* @tree: a pointer to the root node of the tree to traverse
* Return: 0 or 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int height1, height2;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	height1 = binary_tree_is_full(tree->left);
	height2 = binary_tree_is_full(tree->right);
	if (height1 == 0 || height2 == 0)
		return (0);
	return (1);
}
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
