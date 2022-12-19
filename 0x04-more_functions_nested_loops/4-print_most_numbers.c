# include "main.h"

/**
 * print_numbers- function to print numbers and symbols
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;
	int ch = 'x';

	for (i = '0'; i <= '9';)
	{
		if (i == 2 && i == 4)
		{
			_putchar(ch);
		}
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
