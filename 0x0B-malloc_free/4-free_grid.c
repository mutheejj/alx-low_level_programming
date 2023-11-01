#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: an array
 * @height: is an intger
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
	free(grid);
}
