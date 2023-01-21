#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	unsigned int *p, *p1;
	unsigned int i;

	p = (unsigned int*)malloc(nmemb * sizeof(unsigned int));

	p1 = (unsigned int*)calloc(nmemb, sizeof(unsigned int));

	if (p == NULL || p1 == NULL)
	{
		return (NULL);
		exit(0);
	}
	else
	{
		for (i = 0; i < nmemb; ++i)
		{
                        p[i] = i + 1;
                }

                for (i = 0; i < size; ++i)
                {
                        _putchar(i);
                }
		_putchar(p);
	}
	free(p);
	free(p1);
}
