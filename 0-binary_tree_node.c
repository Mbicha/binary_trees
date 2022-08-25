#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create binary tree node
 * @parent: parent of the node to create
 * @value: value to be stored in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_new_node;

	temp_new_node = malloc(sizeof(binary_tree_t));
	if (temp_new_node == NULL)
		return (NULL);
	temp_new_node->parent = parent;
	temp_new_node->n = value;
	temp_new_node->left = temp_new_node->right = NULL;
	return (temp_new_node);
}
