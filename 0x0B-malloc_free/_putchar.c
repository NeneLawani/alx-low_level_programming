#include <unistd.h>
/**
 *_putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 (Success), -1 (Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
