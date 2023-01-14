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
	int *p;
	int i, n = 0;

	p = malloc(nmemb * sizeof(unsigned int));
	if (p == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < n; ++i)
		{
			p[i] = i + 1;
		}

		for (i = 0; i < n; ++i)
		{
			_putchar(i);
		}
	}

	return (p);
}
