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
	int x = 'A';

	while (x <= 'Z')
	{
		putchar(tolower(x));
		x ++;
	}

	return (0);
}
