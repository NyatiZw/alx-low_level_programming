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
	const int i = 0;

	struct listint_t *head = (listint_t *)malloc(sizeof(listint_t));
	*head->n = i;
	*head->next = NULL;

	*head->next = head;
	head = head;

	return (head);
}
