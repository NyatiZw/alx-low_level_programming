# include "main.h"

/**
 * _abs- entry point
 *
 * Description:- 'function to compute the absolute value of an integer'
 * @r:- integer value
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
