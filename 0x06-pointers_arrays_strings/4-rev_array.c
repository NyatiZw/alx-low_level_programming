#include "main.h"

/**
 * reverse_array- Entry Point
 *
 * Description:- ' Function that reverses the array
 * @a: integer values
 * @n: number of elements in array
 *
 * Return: Void
 */

reverse_array(int *a, int n)
{
	int i, j;

	j = 0;

	while (a[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
	{
		for (j = 0; a[j] != '\0' && j < n; j++)
		{
			a[i + j] = *a;
		}
		a[i + j] = '\0';
	}
	return (void);
}
