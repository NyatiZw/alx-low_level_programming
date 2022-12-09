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

	printf("Size of a char : %lu byte(s)\n", (char)sizeof(c));
	printf("Size of an int : %lu byte(s)\n", (int)sizeof(i));
	printf("Size of a long int : %lu byte(s)\n", (long int)sizeof(d));
	printf("Size of a float : %lu byte(s)\n", (float)sizeof(f));

	return (0);
}
