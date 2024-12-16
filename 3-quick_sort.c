#include "sort.h"
#include <stdio.h>

/**
 * swap - function
 * @a: parameter
 * @b: parameter
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - function
 * @array: parameter
 * @low: parameter
 * @high: parameter
 * @size: parameter
 * Return: int
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int b;

	for (b = low; b < high; b++)
	{
		if (array[b] < pivot)
		{
			i++;
			if (i != b)
			{
				swap(&array[i], &array[b]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_recursive - function
 * @array: parameter
 * @low: parameter
 * @high: parameter
 * @size: parameter
 */

void quick_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quick_recursive(array, low, pivot - 1, size);
		quick_recursive(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - function
 * @array: parameter
 * @size: parameter
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	quick_recursive(array, 0, size - 1, size);
}
