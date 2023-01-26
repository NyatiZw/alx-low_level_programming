#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list:- 'Function to print elements of a list'
 * @h:- member
 * Return: size of array
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
