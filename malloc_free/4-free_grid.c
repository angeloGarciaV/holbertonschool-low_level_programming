#include <stdlib.h>
#include <stdio.h>
/**
  * free_grid - function that frees a 2 dimensional grid
  * @grid: grid to free
  * @height: size of grid
  */
void free_grid(in **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
