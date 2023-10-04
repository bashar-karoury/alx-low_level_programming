#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate 2 dimensional array of integers
 * and initialize it with 0
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: double pointer to allocated array
*/
int **alloc_grid(int width, int height)
{

	int **grid = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		grid = (int **)malloc(sizeof(int *) * height);

		if (grid != NULL)
		{
			for (i = 0; i < height; i++)
			{
				grid[i] = (int *)malloc(sizeof(int) * width);
				if (grid[i] == NULL)
				{
					i--;
					while (i >= 0)
					{
						free(grid[i]);
						i--;
					}
					free(grid);
					return (NULL);
				}
			}
			for (i = 0 ; i < height; i++)
				for (j = 0; j < width; j++)
					grid[i][j] = 0;
		}
		return (grid);
	}

}
