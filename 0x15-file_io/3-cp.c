#include "main.h"

/**
 * buffer - a function that allocates 1024 bytes on the heap
 * @argument: the argv file for which memory is being allocated
 *
 * Return: a pointer to the allocated buffer
 */
char *buffer(char *argument)
{
	char *buf;

	buf = malloc(1024 * sizeof(char));
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argument);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - a function which closes file descriptors
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * @ac: the number of arguments passed
 * @av: a pointer to the arguments
 * Return: 1 (Success); 97, 98, 99, 100 (Failure)
 */
int main(int ac, char *av[])
{
	int file_from, file_to, rd, wr;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = buffer(av[2]);
	file_from = open(av[1], O_RDONLY);
	rd = read(file_from, buf, 1024);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(buf);
			exit(98);
		}
		wr = write(file_to, buf, rd);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			free(buf);
			exit(99);
		}
		rd = read(file_from, buf, 1024);
		file_to = open(av[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buf);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
