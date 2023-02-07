#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile:- 'Function that reads and prints file to stdout'
 * @filename:- pointer to filename
 * @letters:- content to print
 * Return: 1
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i;
	*buffer;

	if (!filename)
	{
		return (0);
	}

	buffer = malloc(sizeof(letters));
	if (buffer == NULL)
	{
		return (0);
	}
	i = open("filename", "buffer", "O_RDONLY");

	free(buffer);
	return (1);
}
