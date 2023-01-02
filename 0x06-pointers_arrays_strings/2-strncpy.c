#include "main.h"

/**
 * _strncpy- Function to copy a string
 *
 * Description:- 'Function to copy a string'
 * @dest: destination string
 * @src: source string
 *
 * Return: 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i <= n; i++)
		dest[i] = '\0';

	return (dest);
}
