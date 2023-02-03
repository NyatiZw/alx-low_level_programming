#include "main.h"

/**
 * set_bit:- 'Function to set the value of a bit at given index'
 * @n:- points to number
 * @index:- index value
 * Return: Always 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int)))
	{
		return (-1);
	}

	*n ^= (1 << index);

	return (1);
}

