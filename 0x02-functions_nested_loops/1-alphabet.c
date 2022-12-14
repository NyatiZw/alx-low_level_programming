# include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description:- "c functions & nested loops"
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
