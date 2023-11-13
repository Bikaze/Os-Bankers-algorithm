#include "main.h"

int **input_grid(int rows, int columns)
{
	int **grid = alloc_grid(columns, rows);
	int j  = 0, i = 0;

	while (j < rows)
	{
		i = 0;
		while (i < columns)
		{
			printf("Process %d Resource %d: ", j + 1,  i + 1);
			scanf("%d", &grid[j][i]);
			i++;
		}
		j++;
	}
	printf("\n");
	return (grid);
}
