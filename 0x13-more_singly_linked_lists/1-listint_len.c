#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len:- 'Function to return number of elements in list'
 * @h:- points to struct listint_t
 * Return: Always 0
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	if (h)
	{
		counter++;
	}
	return (counter);
}

