# include "main.h"

/**
 * print_alphabetx10 - entry
 *
 * Description:- " c functions & nested loops"
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)

{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	{
		putchar(alpha * 10);
	}
	putchar('\n');
}
