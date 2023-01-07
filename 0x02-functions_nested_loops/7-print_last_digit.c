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
	num = (num % 10);
	_putchar(num);

	return (0);
}
