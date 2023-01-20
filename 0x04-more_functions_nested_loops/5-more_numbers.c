# include "main.h"
/**
 * more_numbers- function to print numbers
 *
 * Return: void
 */


void more_numbers(void)
{
	int n;
	int l = 0;

	for (n = 0; n <= 14;)
	{
		_putchar(n);

		while (n == 14)
		{
			_putchar('\n');
			for (; l <= 10;)
			{
				_putchar(l);
			}
			l++;
		}
		n++;
	}
}
