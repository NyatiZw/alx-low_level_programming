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
	int n;
	
	for (; n < sizeof(size);)
	{
		action(n);
	}
}
