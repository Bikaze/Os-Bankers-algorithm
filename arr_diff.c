#include "main.h"
/**
  *arr_diff - find the difference between arrays
  *@first: first array of integers
  *@second: second array of integers
  *@columns: width of the arrays
  *Return: pointer to integers
  */
int *arr_diff(int *first, int *second, int columns)
{
	int *arr = (int *)malloc(sizeof(int) * columns);
	int i = 0;

	while (i < columns)
	{
		arr[i] = first[i] - second[i];
		i++;
	}
	return (arr);
}
