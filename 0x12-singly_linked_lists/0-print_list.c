#include "lists.h"
#include <stdio.h>

/**
 * print_list:- 'Function that prints all the elements of a list'
 * @h:- points to first element of list node
 * Return: Sizeof list
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}

	return (i);
}
