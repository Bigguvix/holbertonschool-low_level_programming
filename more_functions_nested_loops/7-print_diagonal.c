#include "main.h"
/**
 * print_diagonal - Main Function.
 *
 * @n: Integer.
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int largo, espa;

	if (n > 0)
	{
		for (largo = 0; largo < n; ++largo)
		{
			for (espa = 0; espa < largo; ++espa)
				putchar(' ');
			putchar('\\');

			if (largo == n - 1)
				continue;

			putchar('\n');
		}
	}

	putchar('\n')
}
