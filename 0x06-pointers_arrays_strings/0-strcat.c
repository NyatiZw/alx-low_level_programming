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
	while (*str1[i] != '\0')
	{
		str1++;
	}

	while (*str2[j] != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}

	*str1 = '\0';
	_putchar(a);
	
	return (str1);
}
