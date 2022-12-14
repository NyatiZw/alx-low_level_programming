# include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description:- " c functions & nested loops"
 *
 * Return: x10 a-z
 *
 */

void print_alphabet_x10(void)
{
	int alpha, sp;
	sp = 0;

		while (sp < 10)
		{
			for (alpha = 'a'; alpha <= 'z'; alpha++)
			{
				putchar(alpha);
			}
		}
		sp++;
		putchar('\n');
}
