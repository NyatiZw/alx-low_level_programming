#include "function_pointers.h"

/**
 * array_iterator- Entry point
 *
 * Description:- 'Function that executes a function given as an element'
 * @array:- member
 * @size:- member
 * @action:- member
 * @int:- member
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j, temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] < array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		action(size);
	}
}
