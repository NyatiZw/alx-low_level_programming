# include "main.h"

/**
 * _islower - entry point
 *
 * Description:- 'function to change character to lowercase'
 * @c:- 'character to change'
 *
 * Return: 1 (Success) || 0 (Not)
 *
 */

int _islower(int c)
{
	if (_islower(c) >= 'a' && c <= 'z')
	{
	_putchar('1');
	}
	else
	_putchar('0');
	return (1);
}
