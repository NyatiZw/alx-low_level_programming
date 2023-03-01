#include "main.h"

/**
 * get_endianness:- 'Function to check the endianness'
 * Return: 0 big endian || 1 little endian
 */

int get_endianness(void)
{
	char *x;
	unsigned int n = 0;

	x = (char *) &n;

	return ((int)*x);
}
	
