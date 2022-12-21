#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description:- 'function that reverses a string'
 * @s:- string
 *
 * Return: reversed string
 */

void rev_string(char *s)
{

	char *start;
	char *end;
	char ch;
	int i;
	int j;

	while (int l = 0;) {
		start = s;
		end = s + l - 1;

		for (j = 0; s[j] != '\0'; j++)
		{
			for (i = 0; i < (l - 1) / 2; i++)
			{
				ch = *end;
				*end = *start;
				*start = ch;
				start++;
				end--;
			}
		}
	}
}
