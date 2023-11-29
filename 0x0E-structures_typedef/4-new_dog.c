#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - create new dog
 *
 *@name: String parameter
 *@age: Float parameter
 *@owner: String parameter
 *
 *Description: Create a new dog
 *
 *Return: Pointer(d)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);
	return (d);
}
