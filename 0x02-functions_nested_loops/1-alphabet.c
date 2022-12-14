# include "main.h"

/**
 * main - entry point
 *
 * Description: "c functions & nested loops"
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
	char alpha;
	
	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
		putchar('\n');
	}
}

int main(void)
{
	print_alphabet();

	return (0);
}
