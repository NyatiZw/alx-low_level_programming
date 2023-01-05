#include "main.h"

/**
 * factorial- Entry Point
 *
 * Description:- 'A function that returns factorial of a numbeer'
 * @n:- number to factorial
 *
 * Return: 0 (Success)
 */

int factorial(int n)
{
	int i = 0;

	if (i <= 0)
	{
		return (-1);
	}
	i = factorial(n - 1);
	_putchar('n');

	return (factorial);
}
