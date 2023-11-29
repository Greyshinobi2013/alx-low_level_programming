#include "dog.h"
#include <stdio.h>
/**
 *print_dog - print struct dog
 *
 *@d: dog type
 *
 *Description: print out struct dog
 *
 *Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
