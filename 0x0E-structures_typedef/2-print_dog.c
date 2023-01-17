#include "dog.h"
#include <stdlib.h>

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
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else if (d == NULL)
	{
		printf("");
	}
	
	if (d.name == NULL)
	{
		printf("nil");
	}
	
	if (d.age == NULL)
	{
		printf("nil");
	}

	if (d.owner == NULL)
	{
		printf("nil");
	}

	printf("Name: %s\n", d.name);
	printf("Age: %d\n", d.age);
	printff("Owner: %s\n", d.owner);
}
