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

typedef struct dog;
func(dog dog_t)
{
	float dog;
	dog = dog_t;
};

#endif /* DOG_H */
