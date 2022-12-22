#include "main.h"

/**
 * _strncat- function to concatenate two strings
 *
 * Description: 'function that concatenates two strings'
 * @str1: destination string
 * @str2: source string
 * @n: number of bytes from str2
 *
 * Return: 0 (Success)
 */

char *_strncat(char *str1, char *str2, int n)
{
	int i, j;

	for (i = 0; str1[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; str2[j] != '\0' && j < n; j++)
	{
		str1[i + j] = str2[j];
	}
	str1[ i + j] = '\0';
	return (str1);
}
