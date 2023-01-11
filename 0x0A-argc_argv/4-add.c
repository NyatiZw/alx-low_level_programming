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

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[i]);
		printf("%d\n", res);
	}
	
	if (argc < 1)
	{
		putchar ('\0');
	}

	return (0);
}
