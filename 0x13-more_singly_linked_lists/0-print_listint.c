#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint:- 'Function to print list elements'
 * @h:- points to first element
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (h->n);
}
