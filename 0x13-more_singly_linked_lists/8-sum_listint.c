#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint:- 'Function that returns sum of list data'
 * @head:- pointer to pointer head of node
 * Return: Always 0
 */

int sum_listint(listint_t *head)
{
	int result;
	listint_t *temp = malloc(sizeof(listint_t));

	head = temp;

	head = malloc(sizeof(listint_t));
	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		result = head->n + head->n;
	}
	return (result);
}
