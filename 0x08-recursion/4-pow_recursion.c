#include "main.h"

/**
 * _pow_recursion- Entry Point
 *
 * Description:- 'A function that returns value of x raised to the power y'
 * @x:- number base
 * @y:- number power
 *
 * Return: 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y % 2 == 0)
	{
		return (_pow_recursion(x * x, y / 2));
	}
	return (_pow_recursion(x * x, (y - 1) / 2));
}
