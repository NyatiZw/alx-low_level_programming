#include "main.h"

/**
 * _strcmp- Entry Point
 *
 * Description:- ' Function that compares two strings'
 * @s1: string destination
 * @s2: string source
 *
 * Return: s1
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; (s2[j] != '\0') && (j < n); j++)
		{
			s1[i + j] = s2[j];
		}
		s1[i + j] = '\0';
	}
	return (*s1);
}
