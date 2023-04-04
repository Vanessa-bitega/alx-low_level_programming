#include "lists.h"
/**
 * sum_listint - Computes the sum of all the data (n) of a listint_t
 * @head: Pointer to the first node of the list.
 *
 * Return: The sum of all the data (n) of the list. If the list is empty,
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
