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
	int ival;
	float fval;

	va_start(ap, format);
	while (*p = format)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}
		switch (*++p)
		{
			case 'i':
				ival = va_arg(ap, int);
				printf("%d", ival);
				break;
			case 'f':
				fval = va_arg(ap, float);
				printf("%f", fval);
				break;
			case 's':
				while (sval == va_arg(ap, char *))
				{
				/*	if (*sval = NULL) {printf("nil");}*/
					_putchar(*sval);
					sval++;
				}
				break;
			default:
				_putchar(*p);
				break;
			}
		p++;
		va_end(ap);
	}
}
