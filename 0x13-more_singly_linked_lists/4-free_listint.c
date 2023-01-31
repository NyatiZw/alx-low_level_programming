#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint:- 'Function that frees memory to a node'
 * @head:- points to first element of list node
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
	}
}
