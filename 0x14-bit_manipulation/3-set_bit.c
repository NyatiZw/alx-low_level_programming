#include "main.h"

/**
 * set_bit:- 'Function that sets the value of a bit to 1 at a given index'
 * @n:- member
 * @index:- member
 * Return: 0 || -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit_value;

	if (index)
	{
		return (-1);
	}
	bit_value = (n >> index) & 1;

	return (bit_value);
}
