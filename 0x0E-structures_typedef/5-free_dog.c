#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free the memory allocated to the dog structure
 * @d: A pointer to the dog architecture that needs to be configured
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)

	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
