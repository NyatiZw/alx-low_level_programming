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
	int i = 0;
	char *buffer;
	
	if (!filename && filename == NULL)
	{
		return (0);
	}
	
	buffer = malloc(sizeof(letters));
	if (buffer == NULL)
	{
		return (0);
	}
	open("filename", "buffer", "O_RONLY");
	read(STDIN_FILENO, buffer, i);
	close(buffer[i]);
	free(buffer);
	
	return (1);
}
