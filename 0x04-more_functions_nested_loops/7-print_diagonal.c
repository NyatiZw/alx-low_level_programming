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
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
