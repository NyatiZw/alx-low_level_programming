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
	if (*s == *accept)
	{
		return (*s);
	}
	return (0);
}
