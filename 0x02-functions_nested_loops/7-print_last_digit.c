# include "main.h"

/**
 * print_last_digit - entry point
 *
 * Description:- " c functions & nested loops"
 *
 * Return: Always 0 (Success)
 *
 */

int print_last_digit(n)
{
	int ld = 0, n;

	ld = n % 10;

	if (ld == 0)
		_putchar(n);
	else if (ld > 5)
		_putchar(ld);
	else if (ld <= 6 && 10)
		_putchar(ld);
	return 0;
}
