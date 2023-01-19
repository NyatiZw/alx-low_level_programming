#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings:- 'Function that prints strings'
 * @separator:- member
 * @n:- member
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argptr;

	const char *str = separator;

	va_start(argptr, n);

	while (str != 0)
	{
		printf("%s", str);
		str = va_arg(argptr, const char*);
	}
	printf("\n");
	va_end(argptr);
}
