#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees 2 dimensional gric dynamically allocated
* @grid: double pointer to 2D grid
* @height: height of 2D grid
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
