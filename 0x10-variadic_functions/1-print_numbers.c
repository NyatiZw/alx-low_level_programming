#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers:- 'Function that prints numbers'
 * @separator:- member
 * @n:- member
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	int i, value;

	va_start(ap, n);

	if (separator == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		value = va_arg(ap, int);
		printf("%d: %d\n", i, value);
	}

	va_end(ap);
}
