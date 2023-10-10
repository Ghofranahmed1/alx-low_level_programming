#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpname, *cpowner;
	int i, len1 = 0, len2 = 0;
	dog_t *newdog;

	while (*name)
	{
		len1++;
		name++;
	}
	while (*owner)
	{
		len2++;
		owner++;
	}
	cpname = malloc(len1 + 1);
	if (cpname == NULL)
		return (NULL);
	cpowner = malloc(len2 + 1);
		if (cpowner == NULL)
			return (NULL);

	for (i = 0; i < len1; i++)
	{
		cpname[i] = name[i];
	}
	cpname[i] = '\0';
	for (i = 0; i < len2; i++)
	{
		cpowner[i] = owner[i];
	}
	cpowner[i] = '\0';
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
