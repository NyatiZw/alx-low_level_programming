# include "main.h"
/**
 * more_numbers- function to print numbers
 *
 * Return: void
 */


void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14;)
		_putchar("%d", i);
		i++;

	while (i <= 14)
	{
		for (j = 0; j <= 10;)
		_putchar("\n");
		j++;
	}
	return (0);
}
