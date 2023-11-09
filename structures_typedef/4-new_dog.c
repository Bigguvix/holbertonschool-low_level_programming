#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Main function.
 *
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: dogg.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;
	char *cpyn, *cpyo;
	int larn = 0, laro = 0, a;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[larn])
		++larn;

	while (owner[laro])
		++laro;

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);

	cpyn = malloc(larn + 1);
	if (cpyn == NULL)
		return (NULL);
	for (a = 0; name[a]; ++a)
		cpyn[a] = name[a];
	cpyn[a] = '\0';

	cpyo = malloc(laro + 1);
	if (cpyo == NULL)
		return (NULL);
	for (a = 0; name[a]; ++a)
		cpyo[a] = owner[a];
	cpyo[a] = '\0';

	dogg->name = cpyn;
	dogg->age = age;
	dogg->owner = cpyo;

	return (dogg);
}
