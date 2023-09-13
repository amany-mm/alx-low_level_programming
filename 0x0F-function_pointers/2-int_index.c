#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: array
 * @size: array size
 * @cmp: function pointer to be used to compare values
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 * return -1 if no element match or size <= 0
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* iterate through array elements and call compare function */
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
