#include "main.h"

/**
 * get_endianness - a function which checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	if (*c)
		return (1);  /* little endian */
	else
		return (0);  /* big endian */
}
