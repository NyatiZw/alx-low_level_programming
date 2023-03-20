#include "lists.h"

/**
 * sun_dlistint:- 'Function that returns sum of all elements'
 * @head:- pointer to head
 * Return: sum of integers || 0
 */
int sum_dlistint(dlistint_t *head)
{
	long int sum;
	distint_t *tmp;

	sum = 0;
	if (head == NULL)
	{
		return (sum);
	}

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
