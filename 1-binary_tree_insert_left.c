#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create binary tree node
 * @parent: parent of the node to create
 * @value: value to be stored in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node_left(binary_tree_t *parent, int value)
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

/**
 *binary_tree_insert_left - Function that inserts node to left
 *@parent: Create parent node
 *@value: value to be stored in newly created node
 *
 *Description: If parent already has a left-child, the new node must take its place, 
 *and the old left-child must be set as the left-child of the new node.
 *
 *Return: pointer to new node or NULL on failure 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);
	left_child = binary_tree_node_left(parent, value);
	if (left_child == NULL)
		return (NULL);
	left_child->left = parent->left;
	if (left_child->left != NULL)
		left_child->left->parent = left_child;
	parent->left = left_child;
	return (left_child);
}
