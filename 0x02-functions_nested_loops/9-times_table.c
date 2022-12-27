#include "main.h"

/**
 * times_table - function to display times table
 *
 *   * Return: times table
 *
 */



void times_table(void)
{
	int r, c, d;

	for (r = 0; r <= 0; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	}

	for (c = 1; c <= 9; c++)
	{
		d = (r * c);
	}

	if ((d / 10) > 0)
	{
		_putchar((d / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}

	_putchar((d % 10) + '0');

	if (c < 9)
	{
		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');

}
