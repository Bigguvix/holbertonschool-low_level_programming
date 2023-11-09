#include "dog.h"
#include <stdlib.h>
#include <string.h>

int _len(char *str);
char *_copy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _len - This is a function to find the length of a string.
 *
 * @str: This is the string to be measured.
 *
 * Return: The measure of the string.
 */
int _len(char *str)
{
	int lar = 0;

	while (*str++)
		++lar;

	return (lar);
}

/**
 * _copy - Copies a string pointed by src to a buffer pointed by dest.
 *
 * @dest: The buffer storing the copy of the string.
 * @src: The string itself.
 *
 * Return: The pointer to dest.
 */
char *_copy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; ++i)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Main Function.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: dogg.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);

	dogg->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}

	dogg->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}

	dogg->name = strcpy(dogg->name, name);
	dogg->age = age;
	dogg->owner = strcpy(dogg->owner, owner);

	return (dogg);
}
