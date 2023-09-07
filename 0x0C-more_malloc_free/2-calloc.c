#include "main.h"
#include <stdlib.h>


/**
 * _calloc -  allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * FYI: The standard library provides a different function: calloc.
 * Run man calloc to learn more.
 *
 * @nmemb: array number of elements
 * @size:  sizeof(datatype)
 *
 * Return: a pointer to the allocated memory.
 *If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i; /* match unsigned arguments */

	/* validate input */
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	/* allocate memory and check if error */
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* set allocated memory values to 0 */
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0; /* type cast assigning values */

	return (ptr);
}

