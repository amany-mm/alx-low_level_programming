#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * You have to store a copy of name and owner
 *
 *@name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new instance of dog struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *name_copy;
	char *owner_copy;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL) /* validate if dog_new initialized correctly */
		return (NULL);
	/* dog1->age */
	dog1->age = age;
	/* dog1->name */
	if (name != NULL)
	{
		name_copy = malloc(strlen(name) + 1);
		if (name_copy == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = strcpy(name_copy, name);
	}
	else
		dog1->name = NULL;
	/* dog1->owner */
	if (owner != NULL)
	{
		owner_copy = malloc(strlen(owner) + 1);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(dog1);
			return (NULL);
		}
		dog1->owner = strcpy(owner_copy, owner);
	}
	else
		dog1->owner = NULL;

	return (dog1);
}
