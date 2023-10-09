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
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner, owner;
}
