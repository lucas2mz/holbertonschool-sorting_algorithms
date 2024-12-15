#include "sort.h"
#include <stdio.h>
#include <stddef.h>

/**
 * selection_sort - sorting algorithm
 * @array: parameter
 * @size: parameter
 */

void selection_sort(int *array, size_t size)
{
	size_t i, b, i_min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		i_min = i;

		for (b = i + 1; b < size; b++)
		{
			if (array[b] < array[i_min])
				i_min = b;
		}

		if (i_min != i)
		{
			temp = array[i];
			array[i] = array[i_min];
			array[i_min] = temp;

			print_array(array, size);
		}
	}
}
