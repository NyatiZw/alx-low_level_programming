#include "main.h"

/**
 * print_chessboard- Entry point
 *
 * Description:- 'function that prints a chessboard'
 * @a: character to print on board
 *
 * Return: 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	}
}
