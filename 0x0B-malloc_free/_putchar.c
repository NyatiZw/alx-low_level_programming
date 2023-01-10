#include "main.h"
#include "stdio.h"

/**
 * _putchar- Entry point
 *
 * Description:- 'Function to print on std output'
 * @c:- character to print
 *
 * Return: 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
