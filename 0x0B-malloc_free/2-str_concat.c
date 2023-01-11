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
	char *s = 0;

	s = malloc(4 * sizeof(char));
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] != '\0')
		{
			while (s2[j] != '\0')
			{
				_putchar(s2[j]);
				j++;
			}
			s1[i] = s2[j];
			_putchar(*s1);
			i++;
		}
		return (s);
	}
	return (" ");
	
	free (s);
	return (0);
}
