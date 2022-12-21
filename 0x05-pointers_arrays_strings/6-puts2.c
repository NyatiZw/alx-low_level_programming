#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description:- 'function that prints every character of a string'
 * @str:- string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
		if (string % 2 == 0)
			_putchar(str[string]);
	_putchar('\n');
}
