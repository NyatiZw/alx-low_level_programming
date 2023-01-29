#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *add_node_end:- 'Function that adds a new node at the end of a list'
 * @head:- start member
 * @str:- string member
 * Return: Sizeof list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int ptr;
	
	*ptr = head;
	head = (list_t *)malloc(sizeof(list_t));
	if (head == NULL)
	{
		return (NULL);
	}
	head = str.head;
	return (head);
}
