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
	int i;

	for (i = 0; i <= 10; i++)
	{
		if(isdigit(c))
			return (1);
		else
			return (0);
	}
}

