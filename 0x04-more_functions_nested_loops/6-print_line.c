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

	for (n = 0; n >= c;)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(c);
		}
		n++;
	}
	_putchar('\n');
}
