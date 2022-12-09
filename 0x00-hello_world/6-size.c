# include <stdio.h>

/**
 * main -Entry point
 *
 * Description: 'checking sizeof'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int d;
	float f;

	printf("Size of a char : %lu, byte(s)\n", (char)sizeof(c));
	printf("Size of an int : %lu.\n", (int)sizeof(i));
	printf("Size of a long int : %lu.\n", (long int)sizeof(d));
	printf("Size of a float : %lu.\n", (float)sizeof(f));

	return (0);
}
