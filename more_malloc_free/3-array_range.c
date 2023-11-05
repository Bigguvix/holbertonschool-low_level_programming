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
	int *array;
	int a;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (a = 0; min <= max; ++a, ++min)
		array[a] = min;

	return (array);
}
