#include "main.h"
#include "stdlib.h"
/**
 * free_grid - free the memory of grid
 * @grid: pointer grid
 * @height: height grid
 */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
