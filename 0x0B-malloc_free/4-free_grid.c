#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array in code
 * @grid: 2d grid in the code
 * @height: the height dimension of grid code
 * Description: frees memory of grid in code
 * Return: nothing should return
 *
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

