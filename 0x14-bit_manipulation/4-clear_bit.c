#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
