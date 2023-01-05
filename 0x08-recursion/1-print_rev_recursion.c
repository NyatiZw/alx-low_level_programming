#include "main.h"

/**
 * _puts_recursion- Entry Point
 *
 * Description:- 'A function that prints a string'
 * @s:- string to print
 *
 * Return: 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	int i;

	for (i = 0; i<=*s; i++)
	{
		_putchar('s');
	}
	_putchar(*s);
	_print_rev_recursion(s + 1);
}
