#include "sort.h"

/**
 * selection_sort - srts an array using selection algorithm
 * @array: array 
 * @size: size of the array
 * Return: array sorted after each time elements swap
 */
void selection_sort(int *array, size_t size)
{
	size_t i, min, j, n;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j < array[min])
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			for (n = 0; n < size; n++)
			{
				printf("%d ", array[n]);
			}
			printf("\n");
		}
	}
}
