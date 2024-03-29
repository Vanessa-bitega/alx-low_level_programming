#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position.
 * @head: Pointer to a pointer to the first element of the list.
 * @index: Index of the node to delete. Starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	prev_node = NULL;
	current_node = *head;
	for (i = 0; current_node && i < index; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (!current_node)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);

	return (1);
}
