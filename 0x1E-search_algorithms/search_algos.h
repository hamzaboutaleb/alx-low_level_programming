#ifndef H_SEARCH_ALGO
#define H_SEARCH_ALGO

#include "stddef.h"

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
