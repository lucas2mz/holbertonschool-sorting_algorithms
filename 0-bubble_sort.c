#include "sort.h"
/**
 * bubble_sort - Sorts an array using Bubble Sort
 * @array: Array to sort
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0, swapped = 0;

	if (array == NULL)
	{
		return;
	}

	for (j = 0; j < size; j++)
	{
		swapped = 0;
		for (i = 0; i < size - 1 - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
		{
			break;
		}

	}
}
