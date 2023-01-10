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
	int w;
	int h;

	h = mollac(sizeof(*h) * 3);
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			_putchar([h][w]);
			w++;
		}
		_putchar("\n");
		h++;
	}
	return (0);
}
