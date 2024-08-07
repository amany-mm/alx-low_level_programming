#include "search_algos.h"

/**
 * min - Function that finds the minimum of 2 numbers
 * @n1: First value
 * @n2: Second value
 *
 * Return: Min or either if equal
 */

size_t min(size_t n1, size_t n2)
{
	if (n1 <= n2)
		return (n1);
	else
		return (n2);
}


/**
 * jump_search - Function that searches for value in sorted array of integers
 * @array: Array to search through
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: Index of value, -1 if NULL or not found
 */

int jump_search(int *array, size_t size, int value)
{
	/* Calculate step size based on square root of array size */
	size_t jump = sqrt(size);
	size_t high, low;

	if (array == NULL || size == 0)
		return (-1);

	/* initial jump search to find interval where value might be located */
	for (high = 0; high < size && array[high] < value; low = high,
		high += jump)
		/* Print the interval where the value was found or expected to be found */
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	/*  Linearly search within identified interval to find value exact position */
	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}
	return (-1);

}

