#include "main.h"
#include <stdlib.h>

/**
 * array_range - Main Function
 *
 * @min: Integer
 * @max: integer.
 *
 * Return: array.
 */
int *array_range(int min, int max)
{
	int *array. a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; ++a)
		array[a] = ++min;

	return (array);
}
