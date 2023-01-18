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
	int i = 0;
	int n = sizeof(array)/sizeof(array[0]);

	for (i = 0; i < n; i++)
	{
		if (size == sizeof(array[0]))
		{
			action(i);
		}
	}
}
