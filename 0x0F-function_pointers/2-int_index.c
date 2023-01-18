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
	int i;

	if (size == sizeof(array[0]))
	{
		for (i = 0; i <= size - 1; i++)
		{
			_putchar(i);
		}
	}
		cmp(i);
		return (0);
}
