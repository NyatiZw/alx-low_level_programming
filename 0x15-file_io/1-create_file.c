#include "main.h"

/**
 * create_file:- 'function that creates a file'
 * @filename:- pointer to filename
 * @text_content:- content of filename
 * Return: Success 1 | Fail -1
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	char *buffer;
	int i;
	int r;
	int w;

	buffer = malloc(sizeof(char));
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (' ');
	}

	fp = open(filename, O_RDONLY || O_WRONLY || O_TRUNC, 0600);

	for (i = 0; i <= (text_content[i] != '\0');)
	{
		i++;
	}
	r = read(fp, buffer, text_content[i]);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fp);

	return (w);
}
