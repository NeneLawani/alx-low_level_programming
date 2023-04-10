#include "main.h"

/**
 * create_file - a function that creates a file and writes a string into it
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 (Success), -1 (Failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | O_EXCL, 0600);
	if (fd == -1)
	{
		if (errno == EEXIST)
			fd = open(filename, O_WRONLY | O_TRUNC);
		else
			return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
