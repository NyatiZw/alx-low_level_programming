#include "main.h"

/**
 * print_triangle:- 'Function to print a triangle'
 * @size:- member
 * Return: Nothing
 */

void print_triangle(int size)
{
	int n, i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size == n)
	{
		for (; n <= size * i;)
		{
			_putchar(' ');
			_putchar('#');
			i++;
		}
		n++;
	}
	_putchar('\n');
}
