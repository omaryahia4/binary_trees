#include "binary_trees.h"

/**
 *binary_tree_node - create a binary tree node
 *@value: the value to put in the new node
 *@parent:  a pointer to the parent node of the node to create
 *Return: new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = malloc(sizeof(binary_tree_t));

	if (tree == NULL)
		return (NULL);
	tree->parent = parent;
	tree->left = NULL;
	tree->right = NULL;
	tree->n = value;
	return (tree);
}
