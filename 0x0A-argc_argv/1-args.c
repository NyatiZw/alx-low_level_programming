#include <stdio.h>
#include <stdlib.h>

/**
 * main- entry point
 *
 * Description:- ' Function that prints number of arguments passed to it'
 *
 * @argc:- arguments count
 * @argv:- arguments vector
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i;

	while (*argv[1] < 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%2d\n", i);
		}
	}
	return (0);
}
