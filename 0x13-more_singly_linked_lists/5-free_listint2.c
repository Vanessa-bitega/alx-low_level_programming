#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to a pointer to the first element of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (!head)
		return;

	current_node = *head;
	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}

	*head = NULL;
}
