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
	int n;
	int ldgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldgt = n % 10;

	if (ldgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldgt);
	}
	else if (ldgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldgt);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldgt);
	}

	return (0);
}
