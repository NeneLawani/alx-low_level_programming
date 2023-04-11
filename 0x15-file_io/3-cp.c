#include "main.h"
/**
 * main - Entry point
 * @ac: the number of arguments passed
 * @av: a pointer to the arguments
 * Return: 1 (Success); 97, 98, 99, 100 (Failure)
 */
int main(int ac, char **av)
{
	int file_from, file_to, wr, rd;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: file_from file_to\n");
		exit(97);
	}
	buf = malloc(1024 * sizeof(char));
	if (buf == NULL)
		return (99);
	file_from = open(av[1], O_RDONLY);
	rd = read(file_from, buf, 1024);
	if (file_from == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		free(buf);
		exit(98);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_EXCL, 0664);
	if (file_to == -1)
		if (errno == EEXIST)
			file_to = open(av[2], O_WRONLY | O_TRUNC);
	wr = write(file_to, buf, rd);
	if (file_to == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		free(buf);
		exit(99);
	}
	free(buf);
	close(file_from);
	close(file_to);
	return (0);
}
