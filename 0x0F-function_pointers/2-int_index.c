#include "function_pointers.h"

/**
 * int_index- Entry point
 *
 * Description:- 'Function that searches for an integer'
 * @array:- member
 * @size:- member
 * @cmp:- member
 *
 * Return: 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	for (i = 0; i < size; i++)
	{
		if (array[i] <= 0)
		{
			return (-1);
		} 
		else if (array[i] == x)
		{
			return i;
		}

		return (0);
}
