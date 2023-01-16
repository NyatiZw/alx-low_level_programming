#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

type struct
{
	char name;
	float age;
	char owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct));
	if (d == NULL)
	{
		return (NULL);
	}
}
