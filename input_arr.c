#include "main.h"

void input_arr(int *arr, int columns)
{
	int i = 0;

	while (i < columns)
	{
		printf("Resource %d: ", i + 1);
		scanf("%d", &arr[i]);
		i++;
	}
	printf("\n");
}
