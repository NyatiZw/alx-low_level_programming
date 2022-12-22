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
	char str1[15], str2[15];
	int i = 0;
	int j = 0;

	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	_putchar("%s", str1);
}
