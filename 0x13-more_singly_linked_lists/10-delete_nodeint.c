#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index:- 'Function to delete node at index'
 * @head:- member
 * @index:- member
 * Return: 1 Succeed || -1 Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 1)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 1)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
