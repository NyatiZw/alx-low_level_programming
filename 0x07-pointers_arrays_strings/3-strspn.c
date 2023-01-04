#include "main.h"

/**
 * _strspn- Entry point
 *
 * Description:- 'function that gets the length of a prefix substring'
 * @s: string segment
 * @accept: bytes
 *
 * Return: 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	for (*s = 0; *s == *accept;)
	{
		if (*s == *accept)
		{
			return (*s + *accept);
		}
		return ('\0');
		accept++;
	}
	return (*s);
}
