#include "main.h"
/**
  *augment_avail - augment the available resources
  *@available: the available array
  *@allocated: the allocate resources
  *@columns: columns of the array
  *Return: nothing
  */
void augment_avail(int *available, int *allocated, int columns)
{
	int i = 0;

	while (i < columns)
	{
		available[i] += allocated[i];
		allocated[i] = 0;
		i++;
	}
}
