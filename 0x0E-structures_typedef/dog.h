#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Dog structure definition
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* dog_t - Define a new type dog_t as a new name for the type struct dog*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H*/
