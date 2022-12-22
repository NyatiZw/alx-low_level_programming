#include "main.h"

/**
 * *_strcat: Entry Point
 *
 * Description: 'function that concatenates to strings'
 *
 * Return: 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	char str1[], str2[];
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
