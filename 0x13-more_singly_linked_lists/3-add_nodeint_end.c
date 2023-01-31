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
	listint_t ptr;
	int i = 0;
	
	*head = (listint_t *)malloc(sizeof(listint_t));
	if (head == NULL)
	{
		return (NULL);
	}
	
	while (i <= n)
	{
		*head = &ptr;
		i++;
	}
	return (*head);
}

