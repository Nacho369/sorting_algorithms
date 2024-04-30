#include "sort.h"


/**
* bubble_sort - A function that sorts an array of integers
* in ascending order using the Bubble sort algorithm
*
* @array: Array to sort
* @size: Size of the array to sort
*
* Return: Void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int hold;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				hold = array[j];
				array[j] = array[j + 1];
				array[j + 1] = hold;
				print_array(array, size);
			}
		}
	}
}
