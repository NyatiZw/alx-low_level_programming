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
	if (n < 0)
	{
		return (-1);
	}
	_putchar('n');
	return(n = factorial(n - 1));
}
