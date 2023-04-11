#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned long int input
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		if (n == 0 && i == index)
			return (0);
		else if (i == index)
			return (n & 1);

		n >>= 1;
	}

	return (-1);
}
