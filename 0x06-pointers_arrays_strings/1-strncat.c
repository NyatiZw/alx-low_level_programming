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

char *_stnrcat(char *str1, char *str2, int n)
{
	int i = 0, j = 0;

	while (str1[i] != '\0')
	{
		++str1;
		i++;
	}

	while (str2[j] != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
		j++;
	}

	_putchar(*str1);

	return (0);
}