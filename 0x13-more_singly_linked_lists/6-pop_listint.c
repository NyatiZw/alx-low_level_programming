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
	if (head == NULL)
	{
		return (0);
		exit (1);
	}
	else
	{
		listint_t *temp = head;
		head = head->link;
		return (temp);
	}
	return (head);
}
