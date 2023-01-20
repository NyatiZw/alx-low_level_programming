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
	char c = '_';

	for (n = 0; n >= 1;)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(c);
	}
	_putchar('\n');
	n++;
}
