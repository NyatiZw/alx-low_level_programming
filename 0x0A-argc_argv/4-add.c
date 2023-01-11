#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

	if (isdigit(argc) > 1)
	{
		for (i = 1; i < argc; i++)
		{
			res += atoi(argv[i]);
		}
	}
	else if (isdigit(argc))
	{
		printf("%d\n", res);
		return (1);

		if (argc < 1)
		{
			putchar ('\0');
		}
	}
	printf("Error\n");
	return (0);
}
