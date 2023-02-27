#include "main.h"

/**
 * append_text_to_file:- 'Funnction to append to file'
 * @filename: filename
 * @text_content: added content
 * Return: 1 || -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numletter;
	int r;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (numletter = 0; text_content[numletter];)
		{
			numletter++;
		}

		r = write(fd, text_content, numletter);

		if (r == -1)
		{
			return (-1);
		}
	}

	close (fd);

	return (1);
}
