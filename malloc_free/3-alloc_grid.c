#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - Function that returns a pointer to a 2 dimensional
  * array of integers.
  * @width: width of grid
  * @height: height of grid
  * Return: grid of integers or NULL if width or height is 0 or negative
  */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grd;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grd = (int **)malloc(sizeof(int *) * height);
	if (grd == NULL)
	{
		free(grd);
		return (0);
	}

	for (k = 0; k < height; k++)
	{
		grd[k] = (int *) malloc(width * sizeof(int));
		if (grd[k] == NULL)
		{
			for (; k >= 0; k--)
				free(grd[k]);
			free(grd);
			return (0);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grd[i][j] = 0;
		}
	}
	return (grd);
}
