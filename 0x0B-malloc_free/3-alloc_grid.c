#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - intialize a two dimentional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: The array or NULL.
 */

int **alloc_grid(int width, int height)
{
	int i, j, n, m;
	int **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			grid[n][m] = 0;
		}
	}
	return (grid);
}
