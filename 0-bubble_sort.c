#include "sort.h"

/**
 * bubble_sort - bubble sorts array in ascending order
 * @array: pointer to array to be sorted
 * @size: the size of thee array to be sorted
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int sorted = 1;

	if (size < 2)
		return;
	while (sorted == 1)
	{
		sorted = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				array[i] += array[i + 1];
				array[i + 1] = array[i] - array[i + 1];
				array[i] -= array[i + 1];
				print_array(array, size);
				sorted = 1;
			}
		}
	}
}
