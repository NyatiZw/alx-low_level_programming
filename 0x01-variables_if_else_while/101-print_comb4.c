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
	int i = 0, j, k;
	int num[];

	for (i = '0'; i < 8; i++)
	{
		for (int i = 0; i < 9; j++)
		{
			for (int k = j + 1; k < 9; k++)
			{
				num[0] = i + '0';
				num[1] = j + '0';
				num[2] = k + '0';
				num [3]= '\0';
				putchar(num);
			}
		}
	}
	putchar('\n');

	return (0);
}
