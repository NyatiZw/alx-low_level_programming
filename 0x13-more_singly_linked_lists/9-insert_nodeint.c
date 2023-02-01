#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *insert_nodeint_at_index:- 'Function that inserts a new node'
 * @head:- Points to start of node
 * @idx:- new node position
 * @n:- integer value
 * Return: Always 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = head;
	listint_t *ptr2 = malloc(sizeof(listint_t));
	ptr2->n = n;
	ptr2->next = NULL;

	idx--;
	while(idx != 1)
	{
		ptr = ptr->next;
		n--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
}
