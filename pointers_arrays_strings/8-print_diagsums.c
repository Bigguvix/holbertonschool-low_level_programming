#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Main Function
 *
 * @a: string
 * @size: integer
 *
 * Return: the sum of diag.
 */
void print_diagsums(int *a, int size)
{
	int b;
	int c = 0;
	int d = 0;

	for (b = 0; b < (size * size); ++b)
	{
		if (b % (size + 1) == 0)
			c += *(a + b);
		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
			d += *(a + b);
	}

	printf("%d, %d\n", c, d);
}
