#include "main.h"
/**
  *check_need - compare the need matrix and the available matrix
  *@available: first array of integers
  *@needed: second array of integers
  *@columns: width of the arrays
  *Return: integer
  */
int check_need(int *available, int *needed, int columns)
{
	int i = 0;

	while (i < columns)
	{
		if (needed[i] > available[i])
			return (0);
		i++;
	}
	return (1);
}
