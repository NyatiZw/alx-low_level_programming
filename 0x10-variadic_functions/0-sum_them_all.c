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
	int sum = 0;
	va_list args1;
	va_start(args1, n);
	va_copy(args1);
	if (n == 0)
	{
		return (0);
	}
	sum += args1;
	va_end(args1);
	return (sum + n);
}
