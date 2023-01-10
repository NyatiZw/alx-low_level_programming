#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid- Entry point
 *
 * Description:- 'function that frees a two dimensional grid of arrays'
 * @grid:- size of array
 * @height:- size of array
 *
 * Return: 0 (Success)
 */

void free_grid(int **grid, int height)
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
			_putchar('a');
		}
		_putchar('\0');
	}
	return (0);
}
