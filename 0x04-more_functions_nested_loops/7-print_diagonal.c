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
	for (n = 0; n <= 1;)
	{
		_putchar('\');
		n++;
		if (n < 0)
		{
			_putchar('\n');
		}
	}
}
