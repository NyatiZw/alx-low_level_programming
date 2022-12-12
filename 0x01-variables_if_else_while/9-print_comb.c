# include <stdio.h>
# include <ctype.h>

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

	for (num = 0; num < 10;)
	{
		putchar((num % 10) + '0');
		putchar(ch);
		putchar(sp);
		num++;
	}

	putchar('\n');

	return (0);
}
