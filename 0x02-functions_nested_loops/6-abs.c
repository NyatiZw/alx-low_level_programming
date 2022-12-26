#include "main.h"

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
	if (r < 0)
	{
		r = (-1) * r;
	}
	else
	{
		_putchar(r);
	}
	return (0);
}
