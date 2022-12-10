#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'c programming variables'
 *
 * Return Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n > 0)
	{
		printf("%n, is Positive") n;
	} else if (n == 0)
	{
		printf("%n, is zero") n;
	{
	else
		printf("%n, is negative") n;
	}

	return (0);
}
