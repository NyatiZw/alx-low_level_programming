#include "main.h"

/**
 * _strstr- Entry point
 *
 * Description:- 'function that locates a substring'
 * @haystack: string
 * @needle: string
 *
 * Return: 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] >= '\0'; i++)
	{
		if (haystack == needle)
			return (*haystack + needle);
	}

	return (needle);
}
