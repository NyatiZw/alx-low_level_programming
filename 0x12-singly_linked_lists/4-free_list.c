#include "lists.h"
#include <stdlib.h>

/**
 * free_list:- 'Function that frees a list_t list'
 * @head:- member
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->len;
		free(head->str);
		free(head);
		head = temp;
	}
}

