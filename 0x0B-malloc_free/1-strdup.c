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

	str = malloc(sizeof(*str));

	for (i = 0; i < *str; i++)
	{
		str[i] = *str;
	}
	return (str);
}
