#include "main.h"

/**
 * _strchr- Entry point
 *
 * Description:- 'function that locates a character in a string'
 * @s: string
 * @c: character to be checked
 *
 * Return: 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
