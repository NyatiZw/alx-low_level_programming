#include "dog.h"

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
		d->name = name;
		d->age = age;
		d->owner = owner;

		free (d);
		return (d);
	}
	return (NULL);

}
