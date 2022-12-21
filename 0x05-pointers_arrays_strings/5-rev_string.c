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
	int i;
	int l;
	char *start;
	char *end;
	char ch;

	l = _strlen(s);
	
	start = s;
	
	end = s;

	for (i = 0; i < (l - 1) / 2; i++) {

		ch = *end;
		*end = *start;
		*start = ch;

		start++;
		end--;
	}
}
