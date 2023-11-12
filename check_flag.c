#include "main.h"
/**
  *full_flag - checks whether the flag array has one(s) everywhere
  *@flag: an integer array
  *@columns: column count for array
  *Return: 1 or 0 (integers)
  */
int full_flag(int *flag, int columns)
{
	int sum = 0;
	int i = 0;

	while (i < columns)
	{
		sum += flag[i];
		i++;
	}

	if (sum == columns)
		return (1);
	else
		return (0);
}
