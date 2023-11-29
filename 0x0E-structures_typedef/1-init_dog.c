#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - initialize variable type dog
 *
 *@d: String parameter
 *@name: String parameter
 *@age: Int parameter
 *@owner: String parameter
 *
 *Description: initialize variable type struct dog
 *
 *Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
