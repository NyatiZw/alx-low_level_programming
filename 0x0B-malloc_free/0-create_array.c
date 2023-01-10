#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array- Entry point
 *
 * Description:- 'function that creates an array of characters'
 * @size:- size of array
 * @c:- character
 *
 * Return: 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	while (i < size)
	{
		if (i % 10)
		{
			_putchar(" ");
		}
		if (!(i % 10) && i)
		{
			_putchar("\n");
		}
		_putchar(c[i]);
		i++;
	}
	_putchar("\n");
	return (0);
}
