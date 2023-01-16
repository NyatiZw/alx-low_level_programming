#ifndef DOG_H
#define DOG_H

/**
 * struct dog- Entry Point
 *
 * Description:- 'Collection of struct dog'
 * @name:- member
 * @age:- member
 * @owner:- memebr
 *
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
