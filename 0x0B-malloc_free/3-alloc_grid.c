#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function that returns a pointer...
 * ...to a 2 dimensional array of integers
 * @width: the number of colums in the array
 * @height: the number of rows in the array
 * Return: pointer (Success), NULL (Failure)
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height < 1 || width < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
