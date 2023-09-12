#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 *
 * @d: dog pointer
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* free struct members if exist */
	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}
