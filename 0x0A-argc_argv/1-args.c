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

	printf("argc = %d\n", argc);
	for (i = 0; i < *argv[i]; i--)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
