#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Description: 'The Alphabet game'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for(int i = 'A'; i <= 'Z'; i++)
	{
		int lower_i = tolower(i);
		putchar(lower_i);
		putchar('\n');
	}

	return (0);
}
