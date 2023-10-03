#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: 2D array to be freed
 * @height: height of array
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
