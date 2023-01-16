#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include "dog.h"

/**
 * init_dog- Entry Point
 *
 * Description:- 'Function that initialize a variable'
 * @d:- member
 * @name:- member
 * @age:- member
 * @owner:- member
 *
 * Return: 0 Success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d = &d;

	d = malloc(sizeof(struct));
	if (d == NULL)
	{
		return (NULL);
	}
}
