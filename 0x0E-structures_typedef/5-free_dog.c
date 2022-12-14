#include "dog.h"
#include <stdlib.h>

/**
 * free_dpg - Free dogs
 * @d: The dog to be free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
