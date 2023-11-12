#include <stdlib.h>
/**
  *free_grid - free a grid
  *@grid: grid
  *@height: number of rows
  *Return: will return nothing
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
