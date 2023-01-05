#include "main.h"

/**
 * _puts_recursion- Entry Point
 *
 * Description:- 'A function that prints a string'
 * @s:- string to print
 *
 * Return: 0 (Success)
 */

void _puts_recursion(char *s)
{
	for (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
