# include "main.h"

/**
 * print_last_digit - entry point
 *
 * Description:- " c functions & nested loops"
 *
 * Return: Always 0 (Success)
 *
 */

void print_last_digit(void)
{
	int ld, n;

	ld = n % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}
		_putchar(ld + '0');

		return (ld);
}
