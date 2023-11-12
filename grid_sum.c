#include "main.h"
/**
  *grid_sum - function to sum two dimesionnal arrays
  *@rows: number of processes
  *@columns: number of resources
  *@first: two dimensional array
  *@second: two dimensional array
  *Return: two dimensional array
  */
int **grid_sum(int rows, int columns, int **first, int **second)
{
	int **grid = alloc_grid(columns, rows);
	int j  = 0, i = 0;

	while (j < rows)
	{
		i = 0;
		while (i < columns)
		{
			grid[j][i] = first[j][i] + second[j][i];
			i++;
		}
		j++;
	}
	return (grid);
}
