#include <stdio.h>

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
	int a = 0, b = 1, c = 2;

	while (a < 8)
	{
		for (b = a + 1; b < 9;)
		{
			for (c = b + 1; c < 10;)
			{
				putchar(a % 10 + '0');
				putchar(b % 10 + '0');
				putchar(c % 10 + '0');
				c++;
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		if (a == 7 && b == 8 && c == 9)
		continue;
		a++;
	}
	putchar('\n');
	return (0);
}
