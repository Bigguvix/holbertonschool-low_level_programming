#include "main.h"

/**
 * print_square - Main Function.
 *
 * @size: Integer.
 *
 * Return: othing.
 */
void print_square(int size)
{
	int alto, gordo;

	if (size > 0)
	{
		for (alto = 0; alto < size; ++alto)
		{
			for (gordo = 0; gordo < size; ++gordo)
				putchar('#');

			if (alto == size - 1)
				continue;
			putchar('\n');
		}
	}

	putchar('\n');
}
