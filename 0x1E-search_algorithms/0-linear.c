#include "search_algos.h"

/**
 * linear_search - Entry Point
 *
 * Description:- 'Function that searches for a value in an array'
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int j = 0;


	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		/* Print value being checked*/
		printf("Value checked array[%d] = [%d]\n", i array[i]);

		/* Check if the current element matches the value*/
		if (array[i] == value)
		{
			j = 1;
			return (i);
		}
	}

	if (j != 1)
	{
		return (-1);
	}
	return (-i);
}
