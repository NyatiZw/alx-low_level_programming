#include "lists.h"

/**
 * list_len:- 'Function that returns the number of elements in a list'
 * @h:- points to length of list
 * Return: Sizeof length
 */

size_t list_len(const list_t *h)
{
	size_t counter;

	if (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
