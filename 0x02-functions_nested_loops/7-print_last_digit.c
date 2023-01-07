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
	while (num == 1)
	{
		for (num = 0; num == (num % 10))
		_putchar(num);
		_putchar(num);
	}
	num++;
	return (num);
}
