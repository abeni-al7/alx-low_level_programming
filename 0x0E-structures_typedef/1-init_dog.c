#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a variable of type struct dog
 * @name: name value for d
 * @age: age value for d
 * @owner: owner value for d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	if (d->name != NULL)
		strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner != NULL)
		strcpy(d->owner, owner);
}
