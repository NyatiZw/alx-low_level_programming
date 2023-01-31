#include <stdlib.h>
#include <stdio.h>

/**
 * *add_nodeint_end:- 'Function to add new node at the end'
 * @head:- points to pointer to struct listint_t
 * @n:- integer
 * Return: Always 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t **ptr, **temp;
	ptr = head;
	temp = (listint_t *)malloc(sizeof(struct listint_t));

	temp->n = n;
	temp->next = NULL;

	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
