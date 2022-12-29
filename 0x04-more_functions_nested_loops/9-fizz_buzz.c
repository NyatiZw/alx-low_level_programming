#include <stdio.h>

/**
 * main: Entry point
 *
 * Description:- ' Function to print numbers 1 - 100'
 *
 * Return- Void
 */

int main()
{
	int i = 0;

	while(i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		printf("%d ", i++);
	}
	return (0);
}
