#include <stdio.h>

/**
 * main - prints the first 98 numbers of the Fibonacci sequence
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int i, bef = 1, aft = 2, l = 1000000000;
	unsigned long int bef1, bef2, aft1, aft2;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = bef / l;
	bef2 = bef % l;
	aft1 = aft / l;
	aft2 = aft % l;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft1 += bef1;
		bef1 = aft1 - bef1;
		aft2 += bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");

	return (0);
}

