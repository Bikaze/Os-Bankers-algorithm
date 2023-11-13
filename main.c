#include "main.h"
/**
  *main - entry point for the program
  *Return: 0 always
  */

int main(void)
{
	int **allocated = NULL, **needed = NULL, **maximum = NULL;
	int *available = NULL, /*totalR = NULL,*/ *flags = NULL, *safeS;
	int resources = 0, processes = 0, entered = 0, i = 0, j = 0, s = 0;

	printf("Enter the number of processes: ");
	scanf("%d", &processes);
	printf("Enter the number of resources: ");
	scanf("%d", &resources);

	available = (int *)malloc(sizeof(int) * resources);
//	totalR = (int *)malloc(sizeof(int) * resources);
	flags = (int *)malloc(sizeof(int) * processes);
	safeS = (int *)malloc(sizeof(int) * processes);

	printf("Enter available amount for each resource:\n");
	input_arr(available, resources);

	printf("Enter allocated resources for each process\n");
	allocated = input_grid(processes, resources);
	printf("Enter maximum individual resource for each process\n");
	maximum = input_grid(processes, resources);

	needed = grid_diff(processes, resources, maximum, allocated);
	//available = arr_diff(totalR, allocated, processes, resources);
	
	while (!full_flag(flags, resources))
	{
		i = entered = 0;
		while (i < processes)
		{
			if (!flags[i] && check_need(available, needed[i], resources))
			{
				j = 0;
				entered = 1;
				flags[i] = 1;
				while (j < resources)
				{
					available[j] += needed[i][j];
					j++;
				}
				safeS[s] = i + 1;
				s++;
			}
			i++;
		}
		if (!entered)
		{
			printf("The system is in unsafe state.\n");
			exit(0);
		}
	}

	printf("The safe sequence is: ");
	i = 0;
	while (i < processes)
	{
		printf("process_%d ", safeS[i]);
		i++;
	}
	printf("\n");
	free_grid(allocated, processes);
	free_grid(needed, processes);
	free_grid(maximum, processes);
	free(available);
	//free(totalR);
	free(flags);
	free(safeS);
	return (0);
}
