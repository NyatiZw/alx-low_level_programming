#include "main.h"

/**
 * get_bit:- 'Function that returns the value of a bit at a given index'
 * @n:- member
 * @index:- member
 * Return: 0 || -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1 << n;
	return ((n & ~m) | (index << n));
}
