# include "main.h"
/**
 * print_most_numbers- function to print numbers
 *
 * Return: void
 */


void print_most_numbers(void)
{
	int a = 0;

	while (a <= "10")
	{
		{
			if (a != 2 && a != 4)
				_putchar(a);
		}
		a++;
	}

	_putchar('\n');
}

