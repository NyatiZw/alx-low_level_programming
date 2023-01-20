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
	char x = x;

	while (i <= 9)
	{
		for (i = 0; i <= 9;)
		{
			if (i == 2 || i == 4)
			{
				_putchar(i + x);
			}
			i++;
			_putchar('\n');
		}
	}
}
