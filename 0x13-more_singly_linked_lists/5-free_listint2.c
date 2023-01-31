#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2:- 'Function that frees memory to a node head'
 * @head:- points to first element of list node
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		exit(1);
	}
	free(head);
}
