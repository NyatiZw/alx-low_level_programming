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
	int i, pass, temp;
	
	for (pass = 1; pass < size; pass++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if ((*action)(array[1], array[i + 1]))
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}
