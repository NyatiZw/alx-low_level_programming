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
	void *p;

	p = malloc(b * sizeof(unsigned int));
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
