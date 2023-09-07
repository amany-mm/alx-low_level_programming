#include "main.h"
#include <stdlib.h>


/**
 * array_range -  creates an array of integers.
 * The array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 *
 * @min: range start from
 * @max: range end at
 *
 * Return: pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	/* validate input */
	if (min > max)
		return (NULL);

	/* malloc and check for error */
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	/* set values */
	for (i = 0; i < n ; i++)
		ptr[i]  = min++;

	return (ptr);
}


