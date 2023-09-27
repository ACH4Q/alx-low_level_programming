#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Defines the attributes of a dog object
 * @d: A pointer to the dog architecture that needs to be configured
 * @name: The dog's name
 * @age: The dog age
 * @owner: The dog owne
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
