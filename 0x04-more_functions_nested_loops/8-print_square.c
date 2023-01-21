#include "main.h"

/**
 * print_square:- 'Function to print a square'
 * @size:- member
 * Return: Nothing
 */

void print_square(int size)
{
	int n = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size == n)
	{
		for (; n <= size * n;)
		{
			_putchar('#');
		}
		n++;
	}
	_putchar('\n');
}
