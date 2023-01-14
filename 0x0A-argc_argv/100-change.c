#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Description:- 'Function to print the minimum change for an amount'
 * @argc:- argument count
 * @argv:- argumnet vector
 *
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int cents, n = 0;

	if (argc <= 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents == 1)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else if (cents >= 1)
		{
			cents -= 1;
		}
		else if (cents < 0)
		{
			printf("O\n");
		}
		n += 1;
	}
	printf("%d\n", n);
	return (0);
}
