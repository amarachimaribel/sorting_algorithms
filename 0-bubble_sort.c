#include "sort.h"

/**
 * swap_ints - To Swap two integers in an array.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 */
void swap_ints(int *n, int *m)
{
	int tmp;

	tmp = *n;
	*n = *m;
	*m = tmp;
}

/**
 * bubble_sort - To Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: To Print the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
