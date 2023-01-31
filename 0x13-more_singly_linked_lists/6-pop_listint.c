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
	listint_t ptr;
	int i;
	int temp;
	
	*head = ptr;
	
	*head = (listint_t *)malloc(sizeof(listint_t));
	if (head == NULL)
	{
		return (0);
		exit (1);
	}
	
	while (head)
	{
		ptr = temp->n;
	}
	return (head);
}
