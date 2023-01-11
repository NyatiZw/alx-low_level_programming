#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup- Entry point
 *
 * Description:- 'function that returns a pointer to allocated space'
 * @str:- string to copy
 *
 * Return: 0 (Success)
 */

char *_strdup(char *str)
{
	int i = 0;

	str = malloc((i) * sizeof(char));

	if (str != NULL)
	{
		while (i < *str)
		{
			str[i] = *str;
			i++;
		}
	}
	return (NULL);

	free(str);
	return (str);
}
