# include "main.h"
/**
 * _isupper- function to find is character is Uppercase
 *
 * @c: 'character to be checked'
 *
 * Return: 1 if uppercase and 0 if not
 */


int _isupper(int c)
{
	int c;

	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
