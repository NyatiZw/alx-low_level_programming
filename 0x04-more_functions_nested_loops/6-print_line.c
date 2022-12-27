# include "main.h"
/**
 * print_line- function to print a line
 *
 * @n: integer value
 *
 * Return: void
 */

void print_line(int n)
{
	int c = '_';
	int sp = ' ';

	for (n = n; n <= n; n++)
	{
		if (n < 0)
		{
			_putchar(sp);
		}
		else
		{
			_putchar(c);
		}
	}
}
