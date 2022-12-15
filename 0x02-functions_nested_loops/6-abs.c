# include "main.h"

/**
 * abs -entry point
 *
 * Description:- 'function to compute the absolute value of an integer @r'
 *
 * Return: Always 0 (Success)
 *
 */

int _abs(int r)
{
	int c = r, n;

	n = _abs(c);

	_putchar(n);
	_putchar('\n');

	return (0);
}
