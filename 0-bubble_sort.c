#include "sort.h"

/**
 * bubble_sort - sorting algorithm
 * @array: the array
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, swap;

	if (array == NULL)
		return;

	do {
		swap = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1]) /* do the swap */
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
	} while (swap != 0);
}
