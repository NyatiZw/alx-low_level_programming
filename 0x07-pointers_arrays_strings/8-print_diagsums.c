#include <stdio.h>

/**
 * print_diagsums- Entry point
 * Description:- 'function that prints the sum of two diagonals of a square'
 *
 * @a:- values to be added
 * @size:- size of square
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j;
	int sum1, sum2;

	size = 0;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < (size * size); i = i + size + 1)
	{
		sum1 = sum1 + a[i];
		for (j = size - 1; j < (size * size) - size; j = j + size - 1)
		{
			sum2 = sum2 + a[j];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
