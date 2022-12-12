# include <stdio.h>
# include <ctype.h>
# include <string.h>

/**
 * main - Entry Point
 *
 * Description: 'C variables loops'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int sp = ' ';
	int ch = ',';
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num < 9)
		{
			putchar(sp);
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
