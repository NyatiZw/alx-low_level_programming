#include "main.h"

/**
 * _strcat- function to concatenate two strings
 *
 * Description: 'function that concatenates two strings'
 * @str1: destination string
 * @str2: source string
 *
 * Return: str1
 */

char *_strcat(char *str1, char *str2)
{
	int i = 0, j = 0;

	while (str1[i] != '\0')
	{
		i++;
	}

	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		j++;
		i++;
	}

	str1[i] = '\0';
	_putchar(*str1);

	return (0);
}
