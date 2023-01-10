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
	if (a  == 0)
	{
		return (NULL);
	}

	for (i = 0; i <= width; i++)
	{
		for (j = 0; j <= height; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\0');
	}
	return (0);
}
