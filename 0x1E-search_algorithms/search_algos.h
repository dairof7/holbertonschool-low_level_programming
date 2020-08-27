#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t ini, size_t end);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
#endif