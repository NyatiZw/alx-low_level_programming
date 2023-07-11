#include "search_algos.h"

/**
 * jump_search:- 'Function that searches for a value in a sortes array'
 *
 * @array: array pointer
 * @size: size of the array
 * @value: value to search for
 *
 * Return:- first index where value is
 */

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}

	int step = sqrt(size);
	int prev = 0;
	int current = step;

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	while (prev < size && array[prev] <= value)
	{
		printf("Vallue checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
		prev++;
	}

	return (-1);
}
