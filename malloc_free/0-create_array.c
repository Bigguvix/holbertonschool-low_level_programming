#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Main Function.
 *
 * @size: Integer.
 * @c: Character.
 *
 * Return: a.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < size; ++b)
		a[b] = c;

	return (a);
}
