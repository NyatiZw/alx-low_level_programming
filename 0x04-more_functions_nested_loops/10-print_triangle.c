/**
 * print_triangle- Entry point
 *
 * Description:- 'Function that prints a triangle'
 * @size:- size of the triangle
 *
 * Return: Always (0)
 */

void print_triangle(int size)
{
	int n, i = 0;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size == n)
	{
		for (; n <= size * i;)
		{
			_putchar(' ');
			_putchar('#');
			i++;
		}
		n++;
	}
	_putchar('\n');
}
