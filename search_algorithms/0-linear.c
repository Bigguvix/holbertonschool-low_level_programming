#include "search_algos.h"

/**
 * linear_search - search a value in array
 *
 * @array: pointer to first element of array
 * @size: number of elements
 * @value: value to search
 *
 * Return: a or -1, -1 if array NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; ++a)
	{
		printf("VAlue checked array[%ld] = [%d]\n", a, array[a]);

		if (array[a] == value)
			return (a);
	}

	return (-1);
}
