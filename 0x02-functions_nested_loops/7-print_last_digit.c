#include "main.h"

/**
 * print_last_digit - entry point
 *
 * Description:- " c functions & nested loops"
 * @num:- intrger value
 *
 * Return: Always 0 (Success)
 *
 */

int print_last_digit(int num)
{
	int digi;

	digi = num % 10;
	if (digi < 0)
	{
		digi = digi * -1;
	}
	_putchar(digi + '0');
	return (digi);
}
