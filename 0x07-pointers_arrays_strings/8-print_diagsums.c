#include <stdio.h>
#include "main.h"

int M, N;

void print_diagsums(int *a; int size)
{
	int principal = 0, secondary = 0;
	for (int i = 0; i < M; i++)
	{
		if (i == j)
			principal += a[i][j];
		if ((i + j) == (N -1))
			secondary += a[i][j];
	}
	printf("%s", "Principal Diagonal:");
	printf("%d\n", principal);
	printf("%s", "Secondary Diagonal:");
	printf("%d\n", secondary);
}
