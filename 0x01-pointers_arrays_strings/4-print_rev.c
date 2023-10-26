#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_rev - Main Function.
 *
 * @s: Pointer to character.
 *
 * Return: string in reverse.
 */
void print_rev(char *s)
{
	int larg = 0;

	while (s[larg] != '\0')
		++larg;
	while (larg)
		putchar(s[--larg]);
	putchar('\n');
}
