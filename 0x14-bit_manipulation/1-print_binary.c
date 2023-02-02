#include "main.h"

/**
 * print_binary:- 'Function that prints binary representation of number'
 * @n:- pointer to string
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = 1 << 31; i > 0; i >>= 1)
	{
		_putchar(n & i);
	}
}
