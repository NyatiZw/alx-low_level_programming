#include "lists.h"

/**
 * print_dlistint:- 'Function to print all elements of a list'
 * @h:- pointer to head of node list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		return (counter);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
