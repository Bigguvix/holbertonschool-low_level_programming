#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array
 *
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t a, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (a = l; a < r; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = l + (r - l) / 2;
		if (array[a] > value)
			r = a - 1;
		else
			l = a + 1;
	}

	return (-1);
}
