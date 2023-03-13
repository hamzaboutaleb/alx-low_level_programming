#include <stdlib.h>
/**
  * free_grid - free 2D array
  * @grid: pointer to 2D Array
  * @height: height of array
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
