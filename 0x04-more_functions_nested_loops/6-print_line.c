# include "main.h"
/**
 * print_line- function to print a line
 *
 * Return: void
 */


void print_line(int)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}

