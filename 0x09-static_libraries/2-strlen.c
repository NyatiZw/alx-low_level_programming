#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description:- 'function that returns the lenght of a string'
 * @s:- char pointer
 *
 * Return: Void
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s++;)
		len++;

	return (len);
}
