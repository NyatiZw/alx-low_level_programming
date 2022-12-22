#include "main.h"
#include "ctype.h"

/**
 * _strcat- function to concatenate two strings
 *
 * Description: 'function that concatenates two strings'
 * @dest: destination string
 * @src: source string
 *
 * Return: 0 (Success)
 */

char *_strcat(char *str1, char *str2)
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
