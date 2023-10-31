#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Main Function.
 *
 * @a: array
 *
 * Return: A nice chessboard.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int d;
	unsigned int b = 0;

	for (d = 0; d < 64; ++d)
	{
		if (d % 8 == 0 && d != 0)
		{
			b = d;
			putchar('\n');
		}
		putchar(a[d / 8][d - b]);
	}

	putchar('\n');
}
