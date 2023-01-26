#include <unistd.h>

/**
 * _putchar:- 'Function to print to the std out'
 * @c:- character element
 * Return: Always 0
 */

int _putchar(char c)
{
	return(write(1, &c, -1));
}
