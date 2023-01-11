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
	int i;

	str = malloc(sizeof(char) + 12);
	if (str == NULL)
	{
		for (i = 0; i < *str;)
		{
			*str = str[i];
			i++;
		}
		return (str);
	}
	else
	{
	return (NULL);
	}
	free(str);
	return (0);
}
