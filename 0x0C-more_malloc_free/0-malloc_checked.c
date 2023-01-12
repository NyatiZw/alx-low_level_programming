#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked- Entry point
 *
 * Description:- 'Function that allocates memory using malloc'
 * @b:- integer value
 *
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	int *b = 0;
	*b = b;

	b = malloc(sizeof(int));
	if (b == NULL)
	{
		exit(-1);
		return (98);
	}
}
