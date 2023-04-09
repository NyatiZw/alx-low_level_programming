#include "hash_tables.h"

/**
 * key_index - function that gives index of a key (hash function)
 *
 * @key: the key
 * @size: size of array of hash table
 *
 * Return: Index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	key = malloc(sizeof(const unsigned char));
	if (key == NULL)
	{
		return (-1);
	}

	while (hash_djb2(key))
	{
		for (i = 0; i <= size[key];)
		{
			i++;
		}
	}

	return (i);
}
