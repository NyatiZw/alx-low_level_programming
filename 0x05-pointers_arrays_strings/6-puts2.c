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
	int i = 0;
	int string_var = 0;

	while (str[string_var] != '\0')
		string_var++;
	if (string_var + 1 % 2 != '0')
		i = (string_var - 1) / 2;
	else
		i = (string_var / str);
	i++;

	for (string_var = i; str[string_var] != '\0'; string_var++)
	{
		_putchar(str[string_var]);
		_putchar('\n');
	}
}
