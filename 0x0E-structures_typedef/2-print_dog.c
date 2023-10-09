#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to a variable of type struct dog
 */

void print_dog(struct dog *d)
{
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}