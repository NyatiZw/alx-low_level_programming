#include <stdio.h>
#include <stdlib.h>

/**
 * main- entry point
 *
 * Description:- ' Function that multiplies two numbers'
 *
 * @argc:- arguments count
 * @argv:- arguments vector
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i, res = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			res = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", res);
		return (0);
	}
	return (0);
}
