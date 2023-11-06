#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - Main Function
 *
 * @d: Structure named dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: nothing.
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
