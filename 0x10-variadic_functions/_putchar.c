#include "variadic_functions.h"

/**
 * _putchar:- 'Function to print on the stdstream'
 * @c:- character
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, -1));
}
