#include "main.h"

/**
 * _strlen_recursion- Entry Point
 *
 * Description:- 'A function that returns length of a string'
 * @s:- string to print
 *
 * Return: 0 (Success)
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (i == 0)
	{
		return ('\0');
	}
	for (i = 0; i<=*s; i++)
	{
		_putchar(*s);
	}
	_putchar(*s);
	return (_strlen_recursion(s + 1));
}
