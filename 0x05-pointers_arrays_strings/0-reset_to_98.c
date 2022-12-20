#include "main.h"

/**
 * reset_to_98- Entry point
 *
 * Description:- 'function that updates the value it points to to 98'
 * @n:- reset to integer parameter
 * @_putchar:- prints to std output
 *
 * Return: Void
 */

void reset_to_98(int *n)
{
	*n = 98;
	_putchar(*n);
	_putchar('\n');
}


