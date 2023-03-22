#include "function_pointers.h"

/**
* int_index - a function that searches for an integer
* @array: the array in question
* @size: the number of elements in the array
* @cmp: a pointer to the function to be used to compare values
*
* Return: array index where integer is found (Success), -1 (Failure)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
