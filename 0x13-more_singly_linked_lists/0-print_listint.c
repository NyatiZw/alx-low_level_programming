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
	const listint_t *ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
