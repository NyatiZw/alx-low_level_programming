#include "function_pointers.h"

/**
 * int_index- Entry point
 *
 * Description:- 'Function that searches for an integer'
 * @array:- member
 * @size:- member
 * @cmp:- member
 *
 * Return: Void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, temp;

	for (i = 0; i < size; i++)
	{
		if (array[i] < array[i])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
		}
	}
}
