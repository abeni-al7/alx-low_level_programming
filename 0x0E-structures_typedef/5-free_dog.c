#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to variable of type struct dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
