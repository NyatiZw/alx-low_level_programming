# include "main.h"
/**
 * more_numbers- function to print numbers
 *
 * Return: void
 */


void more_numbers(void)
{
	int n;
	int c = '-';
	int sp = ' ';

	for (n = 0; n <= 1; n++)
		if (n < 0) {
			putchar(sp);
		} else {
			putchar(c);
		}
}
