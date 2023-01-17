#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog- Entry Point
 *
 * Description:- 'function that frees dogs'
 * @d:- member
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));
	if (d != NULL)
	{
		free (d);
		return (d);
	}
	return (NULL);

}
