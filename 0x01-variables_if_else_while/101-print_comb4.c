# include <stdio.h>

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
	int num[4];

	int a = 0, b = 1, c = 2;

	while ((num[a] <= 7) || (num[b] <= 8) || (num[c] <= 9)) 
	{
		putchar(num);
		a != 9 ? ++c : (b != 8 ? (++b, c = b + 1) : (++num, b = num + 1, c = b + 1));
	}

	return (0);
}
