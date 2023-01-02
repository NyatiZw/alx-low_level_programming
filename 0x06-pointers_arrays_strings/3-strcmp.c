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
	int i, j;

	for (i = 0; str1[i] != '\0'; i++)
	{
		for (j = 0; (str2[j] != '\0') && (j < n); j++)
		{
			str1[i + j] = str2[j];
		}
		str1[i + j] = '\0';
	}
	return (s1);
}
