#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *add_node:- 'Function that adds a new node at the biginning of a list'
 * @head:- start member
 * @str:- string member
 * Return: Sizeof list
 */

list_t *add_node(list_t **head, const char *str)
{
        unsigned int i;

        str = (const char *)malloc(sizeof(const char));
        if (str != NULL)
        {
                for (i = 0; i <= str[0];)
                {
                        i++;
                }
        }
        return (*head);
}
