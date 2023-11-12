#ifndef MAIN_H
#define MAIN_H
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int *arr_diff(int *first, int *second, int columns);
int *arr_sum(int *first, int *second, int columns);
void augment_avail(int *available, int *allocated, int columns);
int full_flag(int *flag, int columns);
int **grid_diff(int rows, int columns, int **max, int **small);
int **grid_sum(int rows, int columns, int **first, int **second);
#endif
