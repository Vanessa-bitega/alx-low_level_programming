#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: a pointer to the head
 * Return: the number of element in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t numOfnode = 0;

	while (h != NULL)
	{
		numOfnode++;
		h = h->next;
	}
	return (numOfnode);
}
