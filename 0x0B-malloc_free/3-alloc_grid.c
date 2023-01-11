#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid- Entry point
 *
 * Description:- 'function that returns pointer to two dimensional array'
 * @width:- size of array
 * @height:- size of array
 *
 * Return: 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	char *a;

	a = malloc((width) * sizeof(height));

	if (a == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height;)
	{
		for (j = 0; j < width;)
		{
			_putchar(width);
			j++;
		}
		_putchar(height);
		i++;
	}
	_putchar('\0');
	return (a);
}
