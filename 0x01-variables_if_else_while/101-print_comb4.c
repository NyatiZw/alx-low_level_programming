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
	int i, j, k;
	int num;

	for (i = '0'; i < 8; i++)
	{
		for (int i = 0; i < 9; j++)
		{
			for (int k = j + 1; k < 9; k++)
			{
				num = i + '0';
				num = j + '0';
				num = k + '0';
				num = '\0';
				putchar(num);
			}
		}
	}
	putchar('\n');

	return (0);
}
