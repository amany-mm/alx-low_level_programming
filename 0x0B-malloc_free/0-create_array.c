#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: array size
 * @c: character to fill array values by
 *
 * Return: NULL if size = 0
 * returns a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	/* validate input size */
	if (size <= 0)
		return (NULL);

	/* allocate memory to arr */
	arr  = malloc(sizeof(char) * size);

	 /* validate memory of arr */
	if (arr == NULL)
		return (NULL);

	/* set array values to char c */
	while (i < (int)size) /* set array values to char c */
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';

	return (arr);

}
