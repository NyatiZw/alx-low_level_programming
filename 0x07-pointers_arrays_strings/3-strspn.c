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
	int i;

	for (i = 0; *accept++;)
	{
		s = i++;
	}

	return (i);
}
