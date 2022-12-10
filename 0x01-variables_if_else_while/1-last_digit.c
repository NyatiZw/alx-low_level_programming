#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Main - Entry point
 *
 * Description: 'print last digit of number'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of, d%, is: c%\n" n last_digit);

return (0);
}
