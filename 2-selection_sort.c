#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: array to be sorted
 * @size: the size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, twap = 0;
	int tomp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		tomp = array[i];
		twap = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < tomp)
			{
				twap = j;
				tomp = array[j];
			}
		}
		if (twap != i)
		{
			array[i] += array[twap];
			array[twap] = array[i] - array[twap];
			array[i] -= array[twap];
			print_array(array, size);
		}
	}
}
