#include <stdio.h>
/**
 * main - Entry point
 *
 * a program that prints the name of the file it was compiled from
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
