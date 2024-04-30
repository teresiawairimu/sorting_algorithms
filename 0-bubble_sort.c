#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: pointer to array
 * @size: size of array
 *
 * Return: array after each swap of two elements
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (n = 0; n < size - i - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				temp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = temp;

				print_array(array, size);
			}
			printf("\n");
		}
	}
}
