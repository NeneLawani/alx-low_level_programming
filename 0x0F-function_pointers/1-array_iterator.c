#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 *			on each element of an array
 * @array: the array in question
 * @size: the size of the array
 * @action: the pointer to the function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
