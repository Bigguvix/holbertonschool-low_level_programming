#include "main.h"

/**
 * times_table - Main function.
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 9; ++b)
		{
		int c = a * b;

		if ((c / 10) == 0)
		{
			if (b != 0)
				_putchar(' ');
			_putchar(c + '0');

		if (b == 9)
			continue;
		_putchar(',');
		_putchar(' ');
		}

		else
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');

			if (b == 9)
				continue;
			_putchar(',');
			_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
