#include "main.h" 
/**arr_diff - find the difference between arrays
 *@first: first array of integers
 *@second: array of integer pointers
 *@rows: height of the arrays
 *@columns: width of the arrays
 *Return: pointer to integers
 */
int *arr_diff(int *first, int **second, int rows, int columns)
{
	int *arr = (int *)malloc(sizeof(int) * columns);
	int i, j, sum;
	i = j = sum = 0;

	while (i < columns)
	{
		j = sum = 0;
		while (j < rows)
        	{
                	sum += second[i][j];
			j++;
        	}

		arr[i] = first[i] - sum;
		i++;
	}
	return (arr);
}
