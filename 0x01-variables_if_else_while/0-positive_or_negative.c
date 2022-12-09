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
		(printf("Positive\n")
	);

	else (n == 0)
		(printf("is zero\n")
	);

	else if
		(printf("is negative\n"));

	return (0);
}
