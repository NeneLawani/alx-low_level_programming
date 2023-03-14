#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer (Success), NULL (Failure)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *s;

	strcat(s1, s2);

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	i++;

	s = malloc(sizeof(char) * i);

	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		s[j] = s1[j];

	s[i] = '\0';

	return (s);
}
