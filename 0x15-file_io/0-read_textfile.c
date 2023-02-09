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
	int fp;
	char *buffer;
	size_t wf, rf;

	buffer = malloc(sizeof(char) * letters);
	if (!filename && !buffer)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	rf = read(fp, buffer, letters);
	wf = write(STDOUT_FILENO, buffer, rf);

	free(buffer);
	close(fp);

	return (wf);
}
