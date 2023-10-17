#include "main.h"

/**
 * print_line - Main Function.
 *
 * @n: Integer.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int largo;

	if (n > 0)
	{
		for (largo = 0; largo < n; ++largo)
			putchar('_');
	}

	putchar('\n');
}
