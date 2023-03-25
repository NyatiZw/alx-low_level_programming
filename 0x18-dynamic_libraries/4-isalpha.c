#include "main.h"
#include <ctype.h>

/**
 * _isalpha - entry point
 *
 * Description:- 'function to check character is aplhabetic'
 * @c:- 'character to check'
 *
 * Return: 1 (Success)
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
