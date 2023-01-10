#include "main.h"

/**
 * _puts - Entry point
 *
 * Description:- 'function that prints a stringg'
 * @str:- string
 *
 * Return: length of string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
