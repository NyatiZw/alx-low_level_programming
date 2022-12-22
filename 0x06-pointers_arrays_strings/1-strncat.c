#include "main.h"

/**
 * _strcat- function to concatenate two strings
 *
 * Description: 'function that concatenates two strings'
 * @dest: destination string
 * @src: source string
 *
 * Return: 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	char str1[100];
	char str2[100];
	char temp[100];

	int i = 0, j = 0;

	str1[100] = *dest;
	str2[100] = *src;

	while (str1[i] != '\0')
	{
		temp[j] = str1[i];
		i++;
		j++;
	}

	i = 0;
	while (str2[i] != '\0')
	{
		temp[j] = str2[i];
		i++;
		j++;
	}
	temp[j] = '\0';

	_putchar("%s", temp);

	return (0);
}
