#include "main.h"
#include <stdio.h>

/**
 * puts_half - Main Function
 *
 * @str: Character.
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int lar = 0, a, b;

	while (str[lar] != '\0')
		++lar;

	if (lar % 2 == 0)
		b = lar / 2;

	else
		b = (lar + 1) / 2;
	for (a = b; a < lar; ++a)
		putchar(str[a]);

	putchar('\n');
}
