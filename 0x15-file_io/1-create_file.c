#include "main.h"

/**
 * create_file:- 'function that creates a file'
 * @filename:- pointer to filename
 * @text_content:- content of filename
 * Return: Success 1 | Fail -1
 */

int create_file(const char *filename, char *text_content)
{
	int length;
	int openf, writef = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length; text_content[length];)
		{
			length++;
	}

	openf= open(filename, O_CREAT || O_RDWR || O_TRUNC, 0600);
	writef = write(openf, text_content, length);

	if (openf == -1 || writef == -1)
	{
		return (-1);
	}

	close(openf);

	return (1);
}
