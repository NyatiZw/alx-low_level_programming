#include "main.h"

/**
 * _memset- Entry point
 *
 * Description:- 'function that fills memory eith a constant byte'
 * @s: pointer to destination
 * @b: character to change to
 * @n: bytes pointed by pointer
 *
 * Return: 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
