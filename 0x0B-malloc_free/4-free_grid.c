#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - frees a 2D grid
  * @grid: grid
  * @height: height of array
  * Return: void
  */

void free_grid(int **grid, int height)
{
int e;

for (e = 0; e < height; e++)
{
	free(grid[e]);
}
free(grid);
}
