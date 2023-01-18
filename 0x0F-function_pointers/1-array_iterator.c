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
	int n = sizeof(array)/sizeof(array[0]), i;

	for (i = 0; i < n; i++)
	{
		_putchar(i);
	}
	action(array[i]);
}
