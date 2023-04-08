#include "hash_tables.h"

/**
 * *hash_table_create - Function to create a hash table
 *
 * @size: size of the array
 *
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *i;

	i = malloc(sizeof(size));
	if (i == NULL)
	{
		return (NULL);
	}
	return (i);
}
