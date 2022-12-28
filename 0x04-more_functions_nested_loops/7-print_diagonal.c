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
	char line = '\';

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar(line);
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
