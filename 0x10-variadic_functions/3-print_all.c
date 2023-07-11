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
	char x,

	va_list ap;
	const char *p, *sval;
	int ival;
	float dval;

	va_start(ap, format);
	va_arg(ap, int);	
	while (p != NULL)
	{
		if (sval == NULL)
		{
			printf("nil");
		}
		if (p == NULL)
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
				dval = va_arg(ap, double);
				printf("%f", dval);
				break;
			case 's':
				while (sval == va_arg(ap, char *))
				{
					printf("%c", *sval);
					sval++;
				}
				break;
			default:
				printf("%c", *p;)
				break;
		}
	}
	p++;
	va_end(ap);
}
