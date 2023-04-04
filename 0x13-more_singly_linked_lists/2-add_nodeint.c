#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: a pointer to a pointer to the head
 * @n: val to store
 *Return: the address of the new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_node;

	my_node = malloc(sizeof(listint_t));
	if (my_node == NULL)
	{
		return (NULL);
	}
	my_node->n = n;
	my_node->next = *head;
	*head = my_node;
	return (my_node);
}
