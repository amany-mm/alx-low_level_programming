#include "main.h"
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block using malloc and free
 * The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum of
 * the old and new sizes
 *
 * 1- If new_size > old_size, the “added” memory should not be initialized
 * 2- If new_size == old_size do not do anything and return ptr
 * 3- If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * 4- If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 *
 * @ptr: pointer to the memory previously allocated with a call
 * to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p; /* reallocated pointer */
	unsigned int i;

	/* free memory if reallocate 0 */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* return ptr if reallocating same old size */
	if (new_size == old_size)
		return (ptr);

	/* malloc new size if ptr is originally null */
	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		else
			return (p);
	}
	/* malloc and check error */
	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	/* fill up values up till minimum of old or new size */
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);

	free(ptr); /* free old ptr */

	return (p);

}


