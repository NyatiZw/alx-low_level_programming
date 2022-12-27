# include "main.h"
/**
 * print_line- function to print a line
 *
 * @int: integer value
 *
 * Return: void
 */

int _putchar(int);
void print_line(int n)
{
	int c = '_';
	int sp = ' ';

	for (n = 0; n <= 1; n++)
		if (n < 0)
			_putchar(sp);
		else
			_putchar(c);
}
