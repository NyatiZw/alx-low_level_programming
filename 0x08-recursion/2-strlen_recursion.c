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

	for (; i <= *s;)
	{
		if (i == *s)
		{
			return (_putchar('\0'));
		}
		i++;
	}
	return (_strlen_recursion(s - 1));
}
