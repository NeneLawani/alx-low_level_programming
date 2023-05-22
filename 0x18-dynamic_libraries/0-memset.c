#include "main.h"

/**
 * _memset - fill the block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: value to be set
 * @n: number of bytes to be changed
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
