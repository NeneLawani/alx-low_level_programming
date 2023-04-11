#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			nbits++;
		n >>= 1;
		m >>= 1;
	}

	return (nbits);
}
