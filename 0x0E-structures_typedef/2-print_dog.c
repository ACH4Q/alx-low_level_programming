#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Used to display the details of a dog object
 * @d: The structure of the dog that needs to be printed.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age) ? d->age : 0);
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
