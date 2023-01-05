#include "main.h"

/**
 * _sqrt_recursion- Entry Point
 *
 * Description:- 'A function that returns value of x raised to the power y'
 * @n:- number
 *
 * Return: 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n * n != 0)
	{
		return (_sqrt_recursion(n * n));
	}
	return (n * _sqrt_recursion(n * n));
}
