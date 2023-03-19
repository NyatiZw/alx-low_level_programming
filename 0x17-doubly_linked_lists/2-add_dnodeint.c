#include "lists.h"

/**
 * add_dnodeint:- 'Function that adds new node at beginning of list'
 * @head:- points to head node
 * @n: integer value
 * Return: Address of new element || NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new-node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
