#include <stddef.h>
/* defines size_t */

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array
 * @size: array size
 * @action: function pointer to execute
 * Return: NULL
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}

