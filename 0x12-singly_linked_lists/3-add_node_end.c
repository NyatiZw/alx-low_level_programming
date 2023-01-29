#include "lists.h"
#include <string.h>

/**
 * *add_node_end:- 'Function that adds a new node at the end of a list'
 * @head:- start member
 * @str:- string member
 * Return: Sizeof list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	unsigned int i;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	temp = strdup(str);
	if (str == NULL)
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
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (*head);
}
