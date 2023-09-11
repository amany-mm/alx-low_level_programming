#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: dog pointer
*/

void print_dog(struct dog *d)
{
	if (d == NULL) /* validate if d is initalized correctly */
		return;

	/* d->name */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* d->age */
	printf("Age: %f\n", d->age);

	/* d->owner */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
