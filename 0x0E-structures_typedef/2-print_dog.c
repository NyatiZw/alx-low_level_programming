#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog- Entry Point
 *
 * Description:- 'function that prints a struct'
 * @d:- member
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (d == NULL)
	{
		printf(" ");
	}

	if (d->name == NULL)
	{
		printf("nil");
	}

	if (*d.age == NULL)
	{
		printf("nil");
	}

	if (d->owner == NULL)
	{
		printf("nil");
	}
}

