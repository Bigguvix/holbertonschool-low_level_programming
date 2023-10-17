#include "main.h"

/**
 * more_numbers - Main function.
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int a, b;

	for (b = 1; b <= 10; ++b)
	{
		for (a = 0; a <= 14; ++a)
		{
			if (a > 9)
				putchar((a / 10) + '0');
			putchar((a % 10) + '0');
		}
		putchar('\n');
	}
}
