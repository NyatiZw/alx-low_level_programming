#include "main.h"

/**
 * print_most_numbers- entry point
 *
 * Description: function to print numbers from 0-9
 *
 * @ _putchar: is used to print on stdout
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i);
		_putchar('\n');
		i++;
	}

	if ( i == 2 || i == 4)
	{
		i++;
	}
}

