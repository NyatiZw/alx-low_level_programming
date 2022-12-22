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
	char *a = str1;

	while (*str1 != '\0')
	{
		str++;
	}

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}

	*str1 = '\0';
	_putchar(a);
	
	return (a);
}
