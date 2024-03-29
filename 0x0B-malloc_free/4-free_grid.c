#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a two dimentional grid
 * @grid: a pointer of the array of integers
 * @height: the height of the grid
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
