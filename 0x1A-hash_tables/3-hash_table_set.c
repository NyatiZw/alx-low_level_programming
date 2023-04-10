#include "hash_tables.h"

/**
 * hash_table_set:- 'Function that adds element to the hash table'
 *
 * @ht:- pointer to hash table element
 * @key:- pointer to key element
 * @value:- pointer to value element
 *
 * Return: 1 || 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index, j;
	char *val_cpy;
	hash_node_t *empty_new_node;

	val_cpy = strdup(value);
	if (ht == NULL || Key == NULL || value == NULL || val_cpy == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = val_cpy;
			return (1);
		}
	}

	empty_new_node = malloc(sizeof(hash_node_t));
	if (empty_new_node == NULL)
	{
		return (0);
	}
	empty_new_node->value = val_cpy;
	empty_new_node->next = ht->array[index];
	ht->array[index] = empty_new_node;

	free(val_cpy);
	free(empty_new_node);
	return (1);
}
