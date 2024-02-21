#include "sort.h"

/**
 * fswap - A function that swap two integers.
 *
 * @xp: A pointer to first int.
 *
 * @yp: A pointer to the second one.
 */


void swap(int *xp, int *yp, int* flag)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	*flag += 1;
}
