#include "3-cal.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add:- ' Function to find the sum'
 * @a:- member
 * @b:- member
 * Return: Sum
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub:- 'Function to subtract'
 * @a:- member
 * @b:- member
 * Return: Difference
 */

int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 * op_mul:- 'Function to multiple'
 * @a:- member
 * @b:- member
 * Return: Product of
 */

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div:- 'Function to divide'
 * @a:- member
 * @b:- member
 * Return: Division
 */

int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod:- 'Function to find the remainder of'
 * @a:- member
 * @b:- member
 * Return: Remainder
 */

int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}

