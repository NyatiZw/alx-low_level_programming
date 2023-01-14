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

	if (argc != 1 && argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (argv[1] == 1)
	{
		if (argv[1] >= 25)
		{
			argv[1] -= 25;
		}
		else if (argv[1] >= 10)
		{
			argv[1] -= 10;
		}
		else if (argv[1] >= 5)
		{
			argv[1] -= 5;
		}
		else if (argv[1] >= 2)
		{
			argv[1] -= 2;
		}
		else if (argv[1] >= 1)
		{
			argv[1] -= 1;
		}
		n += 1;
	}
	printf("%d\n", n);
	return (0);
}

