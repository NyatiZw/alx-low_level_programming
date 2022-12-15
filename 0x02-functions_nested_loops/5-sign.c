# include "main.h"
/**
 * int print_sign (int n): entry point
 *
 * description:- 'function to print the sign of a number'
 *
 * Return: -1 0 1
 *
 */

int print_sign(int n)
{
	if (n >= 0) {
		_putchar('+');
		return (1);
	}
	else if (n == 0) {
		_putchar('0');
		return (0);
	} else { _putchar('-');
		_putchar('1');
		return (-1);
	}
}