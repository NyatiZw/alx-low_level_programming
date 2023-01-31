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
	listint_t *temp;
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = temp->n;

		if (head == NULL)
		{
			return (0);
		}
	}
	return (head);
}
