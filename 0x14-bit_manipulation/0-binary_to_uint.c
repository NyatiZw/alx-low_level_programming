#include "main.h"

/**
 * binary_to_uint:- 'Function that converts a binary number to unsigned int'
 * @b:- pointer to string
 * Return: Always 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (!b)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		result <<= 1;
		result += b[i]-'0';
		i++;
	}
	return (result);
}
