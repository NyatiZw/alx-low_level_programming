#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all:- 'Function that prints anything'
 * @format:- member
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *p, *sval;
	int ival, x;
	float dval;

	va_start(ap, fmt);
	while (*p = fmt)
	{
		if (*p == NULL)
		{
			printf("nil");
		}
		switch (*++p)
		{
			case 'i':
				ival = va_arg(ap, int);
				printf("%d", ival);
				break;
			case 'f':
				dval = va_arg(ap, float);
				printf("%f", dval);
				break;
			case 's':
				while (sval == va_arg(ap, char *))
				{
					_putchar(*sval);
					sval++;
				}
				break;
			default:
				_putchar(c);
				break;
		}
	p++;
	}
	va_end(ap);
}
