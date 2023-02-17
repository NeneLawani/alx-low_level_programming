#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Success (0)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}

		letter++;
	}

	putchar('\n');

	return (0);
}
