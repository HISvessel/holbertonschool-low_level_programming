#include "dog.h"

/**
 * free_dog - this function frees memory from a structure
 * @d: pointer to a dog struct
 * return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
