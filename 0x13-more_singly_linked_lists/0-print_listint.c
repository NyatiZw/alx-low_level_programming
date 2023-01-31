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
	unsigned int i = 0;

	while (h->n[i])
	{
		printf("%d\n", i);
		i++;
	}
	return (h);
}
