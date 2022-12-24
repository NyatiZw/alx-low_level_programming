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
	int a, b, i, j;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 8; b++)
		{
			for (i = 0; i < 9; i++)
			{
				for (j = i + 1; j <= 9; j++)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(' ');
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					if (a == 9 && b == 8 && i == 9 && j == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
