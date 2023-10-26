#include "main.h"
#include <stdio.h>

/**
 * rev_string - Main Function.
 *
 * @s: Pointer to character.
 *
 *
 * Return: string reversed.
 */
void rev_string(char *s)
{
	int larg = 0;

	while (s[larg] != '\0')
		++larg;
	putchar(s[larg]);

	while (larg)
	{
		putchar(s[--larg]);
	}

	putchar('\n');
}
