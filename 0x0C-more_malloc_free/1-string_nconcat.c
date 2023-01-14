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
	unsigned int i, j = 0;
	int *ptr;

	ptr = malloc(n * sizeof(int));
	if (ptr == 0)
	{
		exit(1);
	}

	i = 0;
	if (s1[i++])
	{
		if (s2[i] && i < n)
		{
			s1[j++] = s2[i];
		}
		return (NULL);
	}

	return (s1);
}
