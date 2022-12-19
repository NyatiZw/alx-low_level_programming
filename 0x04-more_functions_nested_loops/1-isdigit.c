# include "main.h"

/**
 * _isdigit- function to find is character is digit or not
 *
 * Description:- function to find is character is digit or not
 *
 * @c: integer value to check code
 *
 * Return: 1 if digit 0 otherwise
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
