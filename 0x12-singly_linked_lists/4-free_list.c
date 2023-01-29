#include "lists.h"

/**
 * free_list:- 'Function that frees a list_t list'
 * @head:- member
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		temp = head->len;
		free(temp->str);
		free(temp);
	}
}

