#include "lists.h"

/**
 * free_delistint:- 'Function that frees a node'
 * @head:- pointer to head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
