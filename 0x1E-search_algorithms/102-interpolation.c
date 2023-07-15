#include "search_algos.h"

/**
 * interpolation_search:- "Function to search for value in sorted array"
 *
 * @array: pointer to first element of array to search
 * @size: size of array block (number of elements)
 * @value: value to search for
 *
 * Return: value's index
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, position;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size -1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		position = low + (((double)(high -low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", position, array[position]);

		if (array[position] == value) 
		{
			return (position);
		}

		if (array[position] < value)
		{
			low = position + 1;
		}
		else
		{
			high = position - 1;
		}
	}

	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}

	printf("Value checked array[%lu] is out of range\n", high);
	return (-1);
}


