#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description:- 'function that prints half of a string'
 * @str:- string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int n = 0;
	int string_var = 0;

	while (str[string_var] != '\0')
		string_var++;
	if (string_var + 1 % 2 != '0')
		n = (string_var - 1) / 2;
	else
		n = (string_var / 2);
	n++;

	for (string_var = n; str[string_var] != '\0'; string_var++)
	{
		_putchar(str[string_var]),'\n';
	}
	_putchar('\n');
}
