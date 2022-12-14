# include "main.h"

/**
 * int _isalpha (int c) - entry point
 *
 * description: 'function _islower()'
 *
 * Return: 1 (Success) || 0 (Not)
 *
 */

int _isalpha(int c)
{

	if(_isalpha(c) >= 'a' && c <= 'z')
	{
	_putchar('1');
	} else _putchar('0');
	return (1);
}
