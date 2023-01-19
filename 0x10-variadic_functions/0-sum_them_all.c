#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all:- 'Function that returns sum of all it's parameters'
 * @n:- member
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, format);
	vtest(format, args);
	va_end(args);

	sum = 0;

	if (n == 0)
	{
		return (0);
	}
	sum = n + args;
	return (sum);
}
