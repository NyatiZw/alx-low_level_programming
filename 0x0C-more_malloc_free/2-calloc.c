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
	int i;

	p = malloc(nmemb * sizeof(unsigned int));
	if (p == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb; ++i)
		{
			p[i] = i + 1;
		}

		for ( i = 0; i < nmemb; ++i)
		{
			_putchar(p[i]);
		}
	}

	return (0);
}
