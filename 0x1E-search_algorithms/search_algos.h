#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H


#endif
#include <stdio.h>
#include <math.h>

void print_array_range(int *array, size_t left, size_t right);
int advanced_binary(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int finder(int *array, int left, int right, int value);
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
