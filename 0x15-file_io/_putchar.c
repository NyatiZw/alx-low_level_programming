#include <unistd.h>

/**
 * _putchar:- 'Function to write to stdout'
 * @c:- character member
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, -1));
}
