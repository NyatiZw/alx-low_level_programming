#include "main.h"
#include <ctype.h>

/**
 * _islower - entry point
 *
 * Description:- 'function to check character to lowercase'
 * @c:- 'character to check'
 *
 * Return: 1 (Success)
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
