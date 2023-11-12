#include "main.h"
/**
  *grid_diff - function to get the difference between two dimesionnal arrays
  *@rows: number of processes
  *@columns: number of resources
  *@max: two dimensional array (big one)
  *@small: two dimensional array (small one)
  *Return: two dimensional array
  */
int **grid_diff(int rows, int columns, int **max, int **small)
{
	int **grid = alloc_grid(columns, rows);
	int j  = 0, i = 0;

	while (j < rows)
	{
		i = 0;
		while (i < columns)
		{
			grid[j][i] = max[j][i] - small[j][i];
			i++;
		}
		j++;
	}
	return (grid);
}
