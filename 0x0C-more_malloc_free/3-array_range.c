#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range- Entry point
 *
 * Description:- 'Function that creates an array o0f integers'
 * @min:- minimum value
 * @max:- maximum value
 *
 * Return: 0 Success
 */

int *array_range(int min, int max)
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

		for ( i = 0; i < n; ++i)
		{
			_putchar(i);
		}
	}

	return (p);
}
