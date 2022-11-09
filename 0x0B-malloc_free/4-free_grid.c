#include <stdlib.h>
#include "main.h"
/**
 *free_grid - free grid
 *@grid: input grid
 *@height: height of grind
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
