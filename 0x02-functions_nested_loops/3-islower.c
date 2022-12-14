# include "main.h"

/**
 * islower - entry point
 *
 * description: 'function _islower()'
 *
 * Return: 1 (Success) || 0 (Not)
 *
 */

int _islower(void)
{
	int c;

	if (c >= 'a' && c <= 'z')
	       	_islower(c);
		_putchar('1');
		else _putchar('0');

		return (1);
}
