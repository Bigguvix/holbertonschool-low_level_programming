#include "main.h"
#include <stdio.h>

/**
 * puts2 - Main Function
 *
 * @str: Character string
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int lar = 0;
	int a = 0;

	while (str[lar] != '\0')
		++lar;

	lar -= 1;

	for (; a <= lar; a += 2)
		putchar(str[a]);

	putchar('\n');
}
