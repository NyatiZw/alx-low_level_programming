#include "main.h"

/**
 * print_diagonal- entry point
 *
 * Description:- 'function that draws a diagonal line'
 * @n:- number of times line is printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n')
		}
	}
	
	if (n <= 0)
	{
		_putchar('\n');
	}
}
