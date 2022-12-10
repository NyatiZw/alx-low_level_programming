#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Main - Entry point
 *
 * Description:- 'If Statement task'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* your code goes there */
	ld = n % 10;
	printf("The random number is %d\n", n);
	printf("The last digit of that number is %d\n", ld);

return (0);
}
