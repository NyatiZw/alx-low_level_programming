# include "main.h"

/**
 * print_alphabet_x10 - entry
 *
 * Description:- " c functions & nested loops"
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha * 10);
		alpha++;
	}

	putchar('\n');
	
}

