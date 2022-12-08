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

	printf("Size of a charecter is: %lu.\n", (char)sizeof(c));
	printf("Size of an interger is: %lu.\n", (int)sizeof(i));
	printf("Size of a long interger is: %lu.\n", (long int)sizeof(d));
	printf("Size of a float is : %lu.\n", (float)sizeof(f));

	return (0);
}
