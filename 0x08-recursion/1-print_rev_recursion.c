#include "main.h"

/**
 * _print_rev_recursion- Entry Point
 *
 * Description:- 'A function that prints a string'
 * @s:- string to print
 *
 * Return: 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
