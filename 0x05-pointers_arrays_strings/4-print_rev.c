#include "main.h"

/**
 * _puts - Entry point
 *
 * Description:- 'function that prints a string in reverse'
 * @s:- string
 *
 * Return: length of string
 */

void print_rev(char *s)
{
	int i;
	int j;
	
	j = 0;

	while (s[j] != '\0')
		j++;
	for ( i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
