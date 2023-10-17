#include "main.h"

/**
 * print_most_numbers - Main function.
 *
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int b;

	for (b = 0; b <= 9; ++b)
	{
		if (b != 2 && b != 4)
			putchar((b % 10) + '0');
	}

	putchar('\n');
}
