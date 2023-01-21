#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat- Entry point
 *
 * Description:-  Function that concatenates two strings
 * @s1:- string destination
 * @s2:- string source
 * @n:- number of bytes to concatenate
 *
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j = 0;
	unsigned int len1;
	unsigned int len2 = 0;

	for (i = 0; s1[i]; i++)
	{
		len1++;

		if (n >= len2)
		{
			return (s2);
		}
		if (s1 == NULL && s2 == NULL)
		{
			return (" ");
		}
	}
	ptr = malloc(len1 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ptr[j++] = s1[i];

		for (i = 0; s2[i]; i++)
		{
			ptr[j++] = s2[i];
		}
	}
	free(ptr);
	return (ptr);
}
