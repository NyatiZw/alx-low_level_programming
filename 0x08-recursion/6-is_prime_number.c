#include "main.h"

/**
 * is_prime_number- Entry Point
 *
 * Description:- 'A function that returns prime numbers'
 * @n:- number
 *
 * Return: 1 (Success) 0 (Not Prime Number)
 */

int is_prime_number(int n)
{
	int m = 0;

	n = m / m;

	if (n >= 1 || m >= 0)
	{
		return (1);
	}
	else if (m == 1)
	{
		return (0);
	}
	return (is_prime_number(n));
}
