#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *add_nodeint:- 'Function to add new node at the beginning'
 * @head:- points to pointer to struct listint_t
 * @n:- integer
 * Return: Always 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int i;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= n;)
	{
		new->next = *head;
		i++;
	}

	*head = new;
	return (new);
}
