#include "main.h"

/**
 * flip_bit:- 'Function to return number of flipped bits'
 * @n:- points to number
 * @m:- member
 * Return: Always 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipper, bit = 0;

	if (flipper > 0)
	{
		bit += (flipper & 1);
		flipper >>= 1;
	}

	return (bit);
}

