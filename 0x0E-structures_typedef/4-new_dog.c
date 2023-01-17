#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *new_dog- Entry Point
 *
 * Description:- 'function that creates a new dog'
 * @name:- member
 * @age:- member
 * @owner:- member
 *
 * Return: Void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	typedef struct dog_t = *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog != NULL)
	{
		strncpy(&name = name);
		strncpy(&owner = owner);
	}
	return (NULL);
}
