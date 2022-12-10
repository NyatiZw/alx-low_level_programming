# include <stdio.h>
# include <ctype.h>

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
	int x = 'A';

	while (x <= 'Z')
	{
		putchar(tolower(x)), putchar(x);
		x++;
	}
		putchar('\n');

	return (0);
}
