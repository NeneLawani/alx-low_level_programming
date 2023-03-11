#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
		}
		else if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
			return (0);
		}
	}

	return (0);
}
