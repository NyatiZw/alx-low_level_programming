#include "lists.h"
#include <string.h>

/**
 * *add_node:- 'Function that adds a new node at the biginning of a list'
 * @head:- start member
 * @str:- string member
 * Return: NULL || address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *temp;
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	temp = strdup(str);
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i];)
	{
		i++;
	}

	new->str = temp;
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
