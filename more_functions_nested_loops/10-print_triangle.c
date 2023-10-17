#include "main.h"

/**
 * print_triangle - main functin.
 *
 * @size: integer.
 *
 * Return: nothing.
 */
void print_triangle(int size)
{
	int a, i;

	if (size > 0)
	{
		for (a = 1; a <= size; ++a)
		{
			for (i = size - a; i > 0; --i)
				putchar(' ');

			for (i = 0; i < a; ++i)
				putchar('#');

			if (a == size)
				continue;

			putchar('\n');
		}
	}

	putchar('\n');
}
