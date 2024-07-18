#include "search_algos.h"

/**
 * interpolation_search - Function d@ searches for value in sorted int array
 * @array: Array to search through
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: Index of value, -1 if NULL or not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL)
		return (-1);

	low = 0, high = size - 1;

	/* continue searching until conditions for interpolation search are met */
	while ((array[high] != array[low]) && (value >= array[low]) &&
		   (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
				 * (value - array[low]));

		/*  Print the current value being checked */
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

		/* Update the search range based on the comparison result */
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	/* Check if the value is found at the lower end of the search range */
	if (array[low] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}

	/* If value is not found, calculate interpolated index again for clarity */
	mid = low + (((double)(high - low) / (array[high] - array[low]))
			 * (value - array[low]));

	printf("Value checked array[%lu] is out of range\n", mid);
	return (-1);
}
