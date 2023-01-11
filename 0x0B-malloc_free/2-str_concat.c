#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat- Entry point
 *
 * Description:- 'function that concatenates two strings'
 * @s1:- string destination
 * @s2:- string source
 *
 * Return: 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j;

	s1 = (sizeof(char) + s2);

	if (s1 == NULL)
	{
		return (" ");
	}
	if (s2 == NULL)
	{
		return (" ");
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		i++;
		j++;
	}

	s1[i] = s2[j];
	_putchar(*s1);

	return (0);
}
