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
	int step;
	int prev;
	int current;

	if (array == NULL)
	{
		return (-1);
	}

	step = sqrt(size);
	prev = 0;
	current = step;

	while (current < step && array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	while (prev < step && array[prev] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
		prev++;
	}

	return (-1);
}
