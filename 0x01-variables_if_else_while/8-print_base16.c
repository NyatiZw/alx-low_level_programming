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

	for (ch = "0x0"; ch <= "0xf"; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
