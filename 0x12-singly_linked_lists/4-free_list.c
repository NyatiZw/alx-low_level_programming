#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list:- 'Function that frees a list_t list'
 * @head:- member
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->len;
		free(head->str);
		free(head);
		head = tmp;
	}
}

