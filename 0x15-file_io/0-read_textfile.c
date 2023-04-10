#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: a pointer to the text file to be read and printed
 * @letters: the number of letters to be read and printed
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);

	free(buf);
	close(fd);
	return (wr);
}
