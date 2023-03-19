#include "lists.h"

/**
 * dlistint_len:- 'Function to return the elements in a list'
 * @h:- Points to header
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
