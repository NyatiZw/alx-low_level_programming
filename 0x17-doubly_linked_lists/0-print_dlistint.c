#include "lists.h"

/**
 * size_t print_dlistint:- 'Function to print all elements of a list'
 * @h:- pointer to head of node list
 * Return : Always 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num;

	h = malloc(sizeof(dlistint));
	if (h == NULL)
	{
		return (0);
	}
	num = h->n;
	return (num);
}
