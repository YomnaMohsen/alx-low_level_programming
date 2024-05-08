#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include<stdlib.h>
#include<stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_arr(int *array, int start, int end);

#endif
