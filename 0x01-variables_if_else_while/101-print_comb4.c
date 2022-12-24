#include <stdio.h>
#include <ctype.c>

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
	int num[];
	int a = 0, b = 1, c = 2;

	while ((num[a] <= 7) || (num[b] <= 8) || (num[c] <= 9)) 
	{
		num[c] != 9 ? ++num[c] : (num[b] != 8 ? (++num[b], num[c] = num[b] + 1) : (++num[a], num[b] = num[a] + 1, num[c] = num[b] + 1));

		putchar(num[a]);
		putchar(num[b]);
		putchar(num[c]);
		putchar('\0');
	}

	return (0);
}
