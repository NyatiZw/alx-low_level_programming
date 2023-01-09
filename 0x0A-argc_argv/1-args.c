#include <stdio.h>

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
	int i = 0;

	if (*argv[i] > 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}
