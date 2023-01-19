#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all:- 'Function that returns sum of all it's parameters'
 * @n:- member
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	unsigned int i, sum;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, const unsigned int);
	}

	va_end(ap);
	return (sum);
}
