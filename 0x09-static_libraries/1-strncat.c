#include "main.h"

/**
 * _strncat- Entry Point
 *
 * Description:- ' Function that concatenates two strings
 * @str1: string destination
 * @str2: string source
 * @n: bytes replaced
 *
 * Return: dest
 */

char *_strncat(char *str1, char *str2, int n)
{
	int i, j;

	for (i = 0; str1[i] != '\0'; i++)
	{
		++str1;
	}
	for (j = 0; str2[j] != '\0' && j < n; j++)
	{
		str1[i + j] = str2[j];
		str1[i + j] = '\0';
	}

	return (str1);
}
