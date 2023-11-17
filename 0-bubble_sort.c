/* 0-bubble_sort.c */

#include "sort.h"

/**
 * bubble_sort - Sorts an array in ascending order using Bubble sort
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;

				/* Print array after each swap */
				print_array(array, size);
			}
		}

		/* If no two elements were swapped in inner loop, array is sorted */
		if (!swapped)
			break;
	}
}
