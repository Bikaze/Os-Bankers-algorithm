#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int *arr_sum(int *first, int *second, int columns);
void augment_avail(int *available, int *allocated, int columns);
int check_need(int *available, int *needed, int columns);
void input_arr(int *arr, int columns);
int **input_grid(int rows, int columns);
int full_flag(int *flag, int columns);
int **grid_diff(int rows, int columns, int **max, int **small);
int *arr_diff(int *first, int **second, int rows, int columns);
int **grid_sum(int rows, int columns, int **first, int **second);
#endif
