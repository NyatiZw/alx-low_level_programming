#include "search_algos.h"

/**
 * linear_search - Entry Point
 *
 * Description:- 'Function that searches for a value in an array'
 * @array: an array
 * @size: size of array
 * @value: value of element
 *
 * Return: Array element | -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;


	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
