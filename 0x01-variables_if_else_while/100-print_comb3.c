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
	int num1;
	int num2;

	for (num1 = '0'; num1 < '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			putchar(ch);
			putchar(sp);
		}
	}
	putchar('\n');

	return (0);
}
