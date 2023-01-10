#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array- Entry point
 *
 * Description:- 'function that creates an array of characters'
 * @size:- size of array
 * @c:- character
 *
 * Return: 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc((size) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}
