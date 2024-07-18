#include "search_algos.h"

/**
 * binary_search_3 - Function that searches for value in sorted integer array
 * @array: array to search through
 * @value: Value to search in array
 * @low: Starting index of array
 * @high: Ending index of array
 *
 * Return: index of value, -1 if NULL or not found
 */

int binary_search_3(int *array, int value, size_t low, size_t high)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		/* Print the last element separately */
		if (i == high)
			printf("%i\n", array[i]);

		/* Print other elements followed by a comma */
		else
			printf("%i, ", array[i]);
	}

	/* Check if the value is at the start of the search range */
	if (array[low] == value)
		return ((int)low);

	/*If the lowest&highest elements aren't same,proceed with binarySearch logic*/
	if (array[low] != array[high])
	{
		/*If middle element is less than value, adjust search range to upper half*/
		if (array[mid] < value)
			return (binary_search_3(array, value, mid + 1, high));

		/*middle element is greater than or equal,adjust search range to lower half*/
		if (array[mid] >= value)
			return (binary_search_3(array, value, low, mid));
	}

	return (-1);
}


/**
 * advanced_binary - Function that searches for value in sorted int array
 * @array: Array to search through
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: Index of value, -1 if NULL or not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	return (binary_search_3(array, value, low, high));
}

