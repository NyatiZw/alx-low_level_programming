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

	for (n = 0; n <= (n * 1); n++)
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
