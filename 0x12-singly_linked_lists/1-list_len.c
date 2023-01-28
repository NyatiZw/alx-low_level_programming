#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len:- 'Function that returns the number of elements in a list'
 * @h:- points to length of list
 * Return: Sizeof length
 */

size_t list_len(const list_t *h)
{
	unsigned int counter;

	for (; counter <= h->len;)
	{
		counter++;
	}
	return (h->len);
}
