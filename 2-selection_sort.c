#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, idx;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
				idx = j;
		}

		if (idx != i)
		{
			/* Swap elements */
			temp = array[i];
			array[i] = array[idx];
			array[idx] = temp;

			/* Print array after each swap */
			print_array(array, size);
		}
	}
}
