#include "search_algos.h"

/**
 * binary_search - Entry Point
 *
 * Description:- 'Function that searches for a value in an array'
 * @array: an array
 * @size: size of array
 * @value: value of element
 *
 * Return: -1 | null
 */

int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);

		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}

/**
 * print_array:- 'Helper function to print halved array'
 * @array: array to halve
 * @start: start of the array
 * @end: end of array
 * Return: nothing
 */

void print_array(int *array, int start, int end)
{
	int i;
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
		{
			printf(", ");
		}
	}
	printf("\n");
}
