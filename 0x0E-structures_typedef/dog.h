#ifndef STRUCTS
#define STRUCTS

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct dog
 * @brief Contains information about dogs
 * This structure has information about a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
