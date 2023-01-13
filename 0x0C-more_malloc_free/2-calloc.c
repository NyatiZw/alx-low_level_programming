#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc- Entry point
 *
 * Description:- 'Function that allocates memory for an array'
 * @nmemb:- array elements
 * @size:- element sizes in bytes
 *
 * Return: Void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(nmemb);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	return (p);
}
