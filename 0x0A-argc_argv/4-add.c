#include <stdio.h>
#include <stdlib.h>

/**
 * main- entry point
 *
 * Description:- ' Function that adds positive numbers'
 *
 * @argc:- arguments count
 * @argv:- arguments vector
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i, res = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			res += atoi(argv[i]);
		}
	}
	if (argc < 1)
	{
		putchar('\0');
	}
	printf("%d\n", res);
	return (0);
}