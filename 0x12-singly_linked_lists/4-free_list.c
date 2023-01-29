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
	while (head)
	{
		free(head);
	}
}

