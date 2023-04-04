#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: pointer to a pointer to the first element of the list
 * @idx: Index where the new node shold be added
 * @n: Integer data for the new node
 * Return: Address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (!head)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	current_node = *head;
	for (i = 0; current_node && i < idx - 1; i++)
		current_node = current_node->next;
	if (!current_node)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
