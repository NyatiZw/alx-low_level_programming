#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc- Entry point
 *
 * Description:- 'Function that allocates memory for an array'
 * @nmemb:- array elements
 * @size:- element sizes in bytes
 *
 * Return: Void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = (void *)malloc(nmemb * sizeof(unsigned int));
	if (p != 0)
	{
		if (nmemb == 0 && size == 0)
		{
			return (NULL);
		}
	}	
	else
	{
		exit(1);
		return (NULL);
	}
	free(p);
	return (p);
}
