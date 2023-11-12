#include <stdlib.h>
/**
  *alloc_grid - allocate a grid
  *@width: number 1
  *@height: number 2
  *Return: will return a pointer to a pointer of an integer
  */
int **alloc_grid(int width, int height)
{
	int **s;
	int size = sizeof(int);
	int i = 0, j = 0, k = 0;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	s = (int **)malloc(height * sizeof(int *));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		s[i] = (int *)malloc(size * width);
		if (s[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(s[k]);
			}
			free(s);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			s[i][j] = 0;
			j++;
		}
		i++;
	}

	return (s);
}
