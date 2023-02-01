#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *get_nodeint_at_index:- 'Function that returns nth node of list'
 * @head:- pointer to pointer head of node
 * @index:- integer value
 * Return: Always 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t temp;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head)
	{
		for (counter = 0; counter <= index;)
		{
			head = head->next;
		}
		counter++;
	}
	return (index);
}
