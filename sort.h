#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fswap(int *xp, int *yp, int* flag);
void swap(int *xp, int *yp);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);


#endif // SORT_H_INCLUDED

