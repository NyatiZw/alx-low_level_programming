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
	int num;
	int ch = ',';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
