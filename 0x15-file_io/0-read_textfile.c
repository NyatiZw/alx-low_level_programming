#include "main.h"
#include <unistd.h>

/**
 * read_textfile:- 'Function that reads and prints file to stdout'
 * @filename:- pointer to filename
 * @letters:- content to print
 * Return: 1
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;

	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		while (filename != NULL)
		{
			for (i = 0; i <= letters;)
			{
				i++;
			}
		}
	}
	return (read_textfile);
}
