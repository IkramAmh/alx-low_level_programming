#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initialize a dog strcture
 * @d: dog structure
 * @name: the name of the dog
 * @age: the age
 * @owner: the owner
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
