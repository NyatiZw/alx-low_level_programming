# include "main.h"
/**
 * _isdigit- function to find is character is Uppercase
 *
 * @c: 'character to be checked'
 *
 * Return: 1 if digit 0 otherwise
 */


int _isdigit(int c)
{
	int i = c;

	for (i = 0; i <= 10; i++)
	{
		if (isdigit(c))
			_putchar(c);
				return (1);
		else
			_putchar(c);
				return (0);
	}
}
