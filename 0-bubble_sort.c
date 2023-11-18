/* 0-bubble_sort.c */
#include "sort.h"

/**
 * bubble_sort - Sorts an array of int in ascending order
 * @array: The array to be sorted
 * @size: Number of elements in the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i <= size - 1; i++)
	{
		for (j = 0; j <= size - 2; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
