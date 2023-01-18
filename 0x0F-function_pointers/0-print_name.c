#include "function_pointers.h"

/**
 * print_name- Entry point
 *
 * Description:- 'Function that prints a name'
 * @name:- member
 * @f:- call back (function called back)
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
