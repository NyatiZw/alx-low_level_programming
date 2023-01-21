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
	int n = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size == n)
	{
		for (; n <= size * n;)
		{
			_putchar(#);
		}
		n++;
	}
	_putchar('\n');
}
