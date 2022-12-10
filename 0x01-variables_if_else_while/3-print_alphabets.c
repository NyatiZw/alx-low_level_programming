# include <stdio.h>
# include <ctype.h>
# include <string.h>

/**
 * main - Entry Point
 *
 * Description: 'While function'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
