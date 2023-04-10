#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * and adds a string at the end of the file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 (Success), -1 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

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
