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
	unsigned int i;
	char *a;

	a = malloc((size) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}
