#include "lists.h"

/**
 * *add_dnodeint:- 'Function that adds new node at end of list'
 * @head:- points to head node
 * @n: integer value
 * Return: Address of new element || NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = *prev;
	new_node->next = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
