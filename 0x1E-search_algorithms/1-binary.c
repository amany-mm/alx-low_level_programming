#include "search_algos.h"

/**
 * print_arr - helper func to print array every time array is halved
 * @array: array
 * @l: left index of original array
 * @r: right index of original array
 */
void print_arr(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}


/**
 * binary_search - Function that searches for value in sorted integer array
 * @array: array to search through
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: index of value, -1 if NULL or not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, l, r;

	l = mid = 0;
	r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_arr(array, l, r);

		mid = l + (r - l) / 2;

		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			r = mid - 1;

		else
			l = mid + 1;

	}

	return (-1);

}
