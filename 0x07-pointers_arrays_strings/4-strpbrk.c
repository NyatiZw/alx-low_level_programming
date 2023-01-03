#include "main.h"

/**
 * _strpbrk- Entry point
 *
 * Description:- 'function that searches a string for any set of bytes'
 * @s: string
 * @accept: string to be checked
 *
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == *accept)
			return (s + i);
	}

	return ('\0');
}
