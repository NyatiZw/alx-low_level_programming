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
	int i;

	while (i <= 9)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i == 2 || i == 4)
			{
				_putchar(i + '0');
			}
		}
	}
	_putchar('\n');
}
