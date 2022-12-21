#include "main.h"
int _strlen(char *);

/**
 * rev_string - Entry point
 *
 * Description:- 'function that reverses a string'
 * @s:- string
 *
 * Return: length of string
 */

void rev_string(char *s)
{
	int i;
	int len;
	char *start;
	char *end;
	char temp;

	len = _strlen(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
