#include "main.h"

/**
 * print_diagonal- entry point
 *
 * Description:- 'function that draws a diagonal line'
 * @n:- number of times line is printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, k, j = 1;
	char sq = '#';

	for (i = 1; n <= (2 * n) - 1; i++)
	{
		for (j = 1; j <= (2 * n) - 1; j++)
		{
			if (i == j || i + j == (2 * n))
			{
				_putchar(sq);
			}
			else
			{
				_putchar(' ');
			}
		}
		if (i < n)
		{
			k++;
		}
		else
		{
			k--;
			_putchar('\n');
		}
	}
}
