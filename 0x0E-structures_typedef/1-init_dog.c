#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: pointer to type dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
