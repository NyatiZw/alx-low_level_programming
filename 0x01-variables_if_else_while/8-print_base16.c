# include <stdio.h>
# include <ctype.h>

/**
 * main - Entry Point
 *
 * Description: 'Hexadecimals'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num;
	int ch;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch)
	putchar('\n');

	return (0);
}
