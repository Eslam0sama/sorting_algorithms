#include "sort.h"

/**
 * bubble_sort - A function that sort integers
 *
 * @array: Array to be sorted
 *
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int flag = 0;

		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				fswap(&array[j + 1], &array[j], &flag);
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
