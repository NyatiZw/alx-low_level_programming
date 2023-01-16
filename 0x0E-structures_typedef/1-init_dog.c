#include "dog.h"

/**
 * init_dog- Entry Point
 *
 * Description:- 'function that initializes a variable'
 * @d:- member
 * @name:- member
 * @age:- member
 * @owner:- member
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		*name->&name;
		age->&age;
		*owner->&owner;
	}
}
