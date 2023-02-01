#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint:- 'Function that deletes the head node
 * @head:- pointer to pointer head of node
 * Return: node's data || 0
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *flex = *head;
		*head = *head->next;
		free(flex);
	}
	return (head);
}
