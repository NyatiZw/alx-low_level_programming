/**
 * print_square- Entry point
 *
 * Description:- 'Function that prints a square'
 * @size:- size of the square
 *
 * Return: Always (0)
 */

void print_square(int size)
{
	int w = 0;
	int l = 0;
	int i = 0;
	int j = 0;

	size = l * w;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			_putchar("\n");
		}
	}
}
