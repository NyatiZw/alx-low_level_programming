#include "lists.h"

/**
 * get_dnodeint_at_index:- 'Function that returns nth node of a list'
 * @head:- pointer to head of list
 * @index:- index to the node to search for
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	{
		return (NULL);
	}

	tmp = head;
	while (tmp)
	{
		if (index == size)
		{
			return (tmp);
		}
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
