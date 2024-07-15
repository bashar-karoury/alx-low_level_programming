#ifndef _SERACH_ALGOS_H_
#define _SERACH_ALGOS_H_
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int start, int end);
#endif